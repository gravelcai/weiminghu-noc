package weiminghu

import org.chipsalliance.cde.config.{Field, Parameters, Config}
import constellation.routing._
import constellation.topology._
import constellation.noc.{NoCParams}
import constellation.channel._
import constellation.router._
import scala.collection.immutable.ListMap
import scala.math.{floor, log10, pow, max}
import constellation.test.{NoCTesterConfig, TLNoCTesterConfig, AXI4NoCTesterConfig, NoCTesterParams}

class TestConfig_Ring_4 extends NoCTesterConfig(NoCTesterParams(NoCParams(
  topology        = BidirectionalTorus1D(4),
  channelParamGen = (a, b) => UserChannelParams(Seq.fill(4) { UserVirtualChannelParams(5) }),
  ingresses       = (0 until 4).map { i => UserIngressParams(i) },
  egresses        = (0 until 4).map { i => UserEgressParams(i) },
  flows           = Seq.tabulate(4, 4) { (s, d) => FlowParams(s, d, 0) }.flatten,
  routingRelation = BidirectionalTorus1DShortestRouting()
)))