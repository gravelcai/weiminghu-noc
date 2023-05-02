// See README.md for license details.

ThisBuild / scalaVersion     := "2.13.8"
ThisBuild / version          := "0.1.0"
ThisBuild / organization     := "WEIMINGHU"

val chiselVersion = "3.5.6"

lazy val commonSettings = Seq(
  name := "weiminghu",
  scalacOptions ++= Seq("-deprecation","-unchecked","-Ymacro-annotations"),
  libraryDependencies ++= Seq("org.scala-lang" % "scala-reflect" % scalaVersion.value),
  libraryDependencies ++= Seq("org.json4s" %% "json4s-jackson" % "3.6.6"),
  libraryDependencies ++= Seq("org.scalatest" %% "scalatest" % "3.2.0" % "test"),
  resolvers ++=
    Resolver.sonatypeOssRepos("snapshots") ++
    Resolver.sonatypeOssRepos("releases") ++
    Seq(Resolver.mavenLocal)
)

lazy val chiselSettings = Seq(
  libraryDependencies ++= Seq(
    "edu.berkeley.cs" %% "chisel3" % chiselVersion,
    "edu.berkeley.cs" %% "chiseltest" % "0.5.4" % "test"
  ),
  addCompilerPlugin("edu.berkeley.cs" % "chisel3-plugin" % chiselVersion cross CrossVersion.full)
)

lazy val cde = (project in file("rocket-chip/cde"))
  .settings(commonSettings)
  .settings(publishArtifact := false)
  .settings(Compile / scalaSource := baseDirectory.value / "cde/src/chipsalliance/rocketchip")

lazy val hardfloat  = (project in file("rocket-chip/hardfloat"))
  .settings(commonSettings, chiselSettings)
  .settings(publishArtifact := false)

lazy val `rocket-macros` = (project in file("rocket-chip/macros"))
  .settings(commonSettings)

lazy val `rocket-chip` = (Project("rocket-chip", file("rocket-chip/src")))
  .settings(commonSettings, chiselSettings)
  .dependsOn(cde)
  .dependsOn(hardfloat)
  .dependsOn(`rocket-macros`)
  .settings(
    Compile / scalaSource := baseDirectory.value / "main" / "scala",
    Compile / resourceDirectory := baseDirectory.value / "main" / "resources"
  )

lazy val weiminghu = (Project("weiminghu-noc", base = file(".")))
  .settings(commonSettings, chiselSettings)
  .dependsOn(`rocket-chip`)