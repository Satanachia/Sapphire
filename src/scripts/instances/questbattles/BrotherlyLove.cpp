#include <ScriptObject.h>
#include <Territory/QuestBattle.h>

using namespace Sapphire;

class BrotherlyLove : public Sapphire::ScriptAPI::QuestBattleScript
{
private:
  static constexpr auto INIT_P_POP_IDA = 4255892;
  static constexpr auto INIT_P_POP_PAPARIMO = 4255894;
  static constexpr auto INIT_POP_BOSS = 4255868;
  static constexpr auto INIT_POP_1_THM_01 = 4255869;
  static constexpr auto INIT_POP_1_THM_02 = 4255870;
  static constexpr auto INIT_POP_1_THM_03 = 4255871;
  static constexpr auto INIT_POP_2_CNJ_01 = 4255896;
  static constexpr auto INIT_POP_2_GLA_01 = 4255897;
  static constexpr auto INIT_POP_2_GLA_02 = 4255898;
  static constexpr auto INIT_POP_2_MOL_01 = 4255903;
  static constexpr auto INIT_POP_2_MOL_02 = 4255904;
  static constexpr auto INIT_POP_3_MOL_01 = 4261134;
  static constexpr auto INIT_POP_3_THM_01 = 4261155;
  static constexpr auto INIT_ENPC_01 = 4256371;
  static constexpr auto LOC_ACTOR0 = 1003005;
  static constexpr auto LOC_ACTOR1 = 1008117;
  static constexpr auto LOC_ACTOR2 = 1002275;
  static constexpr auto LOC_ACTOR3 = 1002276;
  static constexpr auto LOC_ACTOR4 = 1007007;
  static constexpr auto LOC_POS_ACTOR0 = 4307105;
  static constexpr auto LOC_POS_ACTOR1 = 4307106;
  static constexpr auto LOC_POS_ACTOR2 = 4307107;
  static constexpr auto LOC_POS_ACTOR3 = 4307108;
  static constexpr auto LOC_ACTION1 = 956;
  static constexpr auto LOC_ACTION2 = 954;
  static constexpr auto LOC_ACTION3 = 962;
  static constexpr auto POP_RANGE_MONSTER_DEPOP = 4332127;
  static constexpr auto LOC_ACTOR5 = 1008173;
  static constexpr auto LOC_BGM1 = 39;
  static constexpr auto LOC_BGM2 = 93;

public:
  BrotherlyLove() : Sapphire::ScriptAPI::QuestBattleScript( 57 )
  { }

  void onInit( QuestBattle& instance ) override
  {
    instance.addEObj( "Pollencluster", 2000129, 0, 2315601, 4, { -154.833298f, -0.625671f, 171.099396f }, 1.144348f, 0.000048f, 0); 
    instance.addEObj( "unknown_0", 2000409, 0, 3715786, 4, { -151.751007f, 1.608049f, 145.860992f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Entrance", 2001710, 4138563, 4138562, 5, { -173.216400f, -3.430103f, 183.856796f }, 1.000000f, 0.000000f, 0); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 
    instance.addEObj( "Sylphickeepsake", 2001227, 0, 4322586, 4, { 294.431213f, -1.040000f, 143.681396f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sylphickeepsake_1", 2001227, 0, 4322587, 4, { 321.827911f, -3.020000f, 144.090897f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sylphickeepsake_2", 2001227, 0, 4322589, 4, { 290.637299f, -0.740000f, 163.516006f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sylphickeepsake_3", 2001227, 0, 4322591, 4, { 309.508911f, -0.240000f, 173.715103f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sylphickeepsake_4", 2001227, 0, 4322592, 4, { 298.527588f, 0.510000f, 187.215897f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sylphickeepsake_5", 2001227, 0, 4322594, 4, { 258.492493f, -0.220000f, 149.720093f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sylphickeepsake_6", 2001227, 0, 4322599, 4, { 260.485596f, 0.120000f, 130.993103f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sylphickeepsake_7", 2001227, 0, 4322601, 4, { 257.467102f, 0.260000f, 180.673294f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_1", 2001672, 0, 4103733, 4, { 51.468632f, 7.888855f, 486.472809f }, 0.991760f, 1.407976f, 0); 
    instance.addEObj( "Destination", 2004254, 0, 4745343, 4, { 260.836792f, -9.082514f, -77.379066f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_1", 2002864, 0, 4496980, 4, { 270.292114f, -0.236188f, 168.551102f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sylphpodling", 2002865, 0, 4497120, 4, { 259.773590f, -8.686693f, -81.574600f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_2", 2003035, 0, 4515593, 4, { 21.365570f, -6.232798f, 251.565796f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sylphpodling_1", 2003036, 0, 4515594, 4, { 21.370729f, -6.231795f, 251.573700f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Fragrantbloom", 2003330, 0, 4548814, 4, { 197.333801f, 8.378596f, 176.602798f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Fragrantbloom_1", 2003331, 0, 4548815, 4, { 235.789200f, -1.592303f, 104.609299f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Fragrantbloom_2", 2003332, 0, 4548816, 4, { 198.952194f, -3.617840f, -11.549170f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Fragrantbloom_3", 2003333, 0, 4548818, 4, { 261.949493f, -7.052843f, 3.433620f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Moongrass", 2003334, 0, 4548820, 4, { 240.559402f, -5.273791f, -47.777660f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Moongrass_1", 2003335, 0, 4588382, 4, { 204.367706f, -3.361009f, -11.380580f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Moongrass_2", 2003336, 0, 4588383, 4, { 181.841400f, 0.028064f, 34.078308f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Moongrass_3", 2003459, 0, 4588384, 4, { 205.467407f, -1.536390f, 90.842522f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Moongrass_4", 2003460, 0, 4588395, 4, { 207.316895f, 9.219618f, 189.518997f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Moongrass_5", 2003461, 0, 4588396, 4, { 68.643959f, 4.922075f, 183.815094f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_2", 2003425, 0, 4576915, 4, { 276.268890f, -10.496140f, -70.834373f }, 1.052795f, 0.000048f, 0); 
    instance.addEObj( "Sylphpodling_2", 2002883, 0, 4498913, 4, { 102.494904f, -20.340330f, -512.870972f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sylphpodling_3", 2002882, 0, 4498914, 4, { -26.077181f, -35.070999f, -539.086182f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Moongrass_6", 2003344, 0, 4549544, 4, { 180.100006f, -21.814190f, -454.500000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Moongrass_7", 2003345, 0, 4549545, 4, { 257.190796f, -23.392200f, -374.319092f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Moongrass_8", 2003346, 0, 4549546, 4, { 314.198395f, -17.929380f, -269.611603f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Sylphpodling_4", 2003343, 0, 4549547, 4, { 102.525299f, -20.309811f, -512.840515f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_3", 2003426, 0, 4577350, 4, { 99.748169f, -20.187740f, -512.474182f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_3", 2003423, 0, 4577365, 4, { 45.954391f, 6.073489f, 250.591400f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_4", 2003424, 0, 4577367, 4, { 45.954399f, 6.073500f, 250.591400f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_4", 2003388, 0, 4578406, 4, { -8.182032f, -34.830978f, -531.505005f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Moongrass_9", 2003472, 0, 4589592, 4, { 207.316895f, 9.219618f, 189.518997f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Moongrass_10", 2003473, 0, 4589593, 4, { 68.643959f, 4.922075f, 183.815094f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Moongrass_11", 2003462, 0, 4589558, 4, { 325.490112f, -18.812401f, -167.101593f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Moongrass_12", 2003470, 0, 4589581, 4, { 243.800003f, -5.200000f, -51.700001f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Moongrass_13", 2003471, 0, 4589591, 4, { 234.800003f, -3.874040f, 67.699997f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_5", 2003155, 0, 4536337, 4, { -247.292099f, 5.402741f, 279.090515f }, 0.991760f, 1.081068f, 0); 
    instance.addEObj( "Destination_6", 2003156, 0, 4536338, 4, { -227.161697f, 5.266186f, 276.482788f }, 0.991760f, 0.446265f, 0); 
    instance.addEObj( "Destination_7", 2003157, 0, 4536339, 4, { -234.703796f, 3.264596f, 271.138214f }, 0.991760f, -0.104419f, 0); 
    instance.addEObj( "Destination_8", 2003158, 0, 4536340, 4, { -217.317001f, 2.177073f, 285.324402f }, 0.991760f, 0.917035f, 0); 
    instance.addEObj( "Destination_9", 2003159, 0, 4536341, 4, { -202.240402f, 0.909965f, 278.834015f }, 0.991760f, 0.476351f, 0); 
    instance.addEObj( "Destination_10", 2003160, 0, 4536342, 4, { -242.640900f, 7.049800f, 297.737701f }, 0.991760f, -0.124993f, 0); 
    instance.addEObj( "Destination_11", 2003161, 0, 4536343, 4, { -224.126297f, 1.514189f, 267.972809f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_12", 2003162, 0, 4536344, 4, { -229.975601f, 4.013759f, 291.695099f }, 0.991760f, -0.547807f, 0); 
    instance.addEObj( "Sackofdevilgourds", 2003067, 0, 4517563, 4, { 354.583893f, -4.603297f, -11.392800f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sackofdevilgourds_1", 2003068, 0, 4517567, 4, { 323.838593f, -5.761353f, -17.896009f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sackofdevilgourds_2", 2003069, 0, 4517568, 4, { 327.674591f, -6.085326f, -7.901030f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sackofdevilgourds_3", 2003070, 0, 4517569, 4, { 328.105194f, -4.855515f, -31.267309f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sackofdevilgourds_4", 2003071, 0, 4517570, 4, { 182.667099f, -1.920222f, 23.114180f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sackofdevilgourds_5", 2003072, 0, 4517571, 4, { 187.073502f, -0.680873f, 76.101418f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sackofdevilgourds_6", 2003073, 0, 4517572, 4, { 181.013107f, -0.379152f, 68.056587f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sackofdevilgourds_7", 2003074, 0, 4517588, 4, { 206.287796f, -2.382749f, 69.434540f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Deepwoodsapling", 2003221, 0, 4569636, 4, { 254.206100f, -6.336769f, 41.450748f }, 0.991760f, -1.248056f, 0); 
    instance.addEObj( "Deepwoodsapling_1", 2003222, 0, 4569637, 4, { 253.533905f, -5.510984f, 22.278280f }, 0.991760f, -1.510563f, 0); 
    instance.addEObj( "Deepwoodsapling_2", 2003223, 0, 4569638, 4, { 288.768311f, -5.225069f, 37.053440f }, 1.000000f, -0.209019f, 0); 
    instance.addEObj( "Deepwoodsapling_3", 2003224, 0, 4569639, 4, { 281.282898f, -5.528382f, 10.890320f }, 0.991760f, 1.029748f, 0); 
    instance.addEObj( "Deepwoodsapling_4", 2003225, 0, 4569640, 4, { 313.383514f, -6.745697f, 17.728300f }, 1.000000f, 1.261924f, 0); 
    instance.addEObj( "Deepwoodsapling_5", 2003226, 0, 4569641, 4, { 309.700500f, -5.789827f, 36.660000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Deepwoodsapling_6", 2003227, 0, 4569642, 4, { 297.563690f, -5.432125f, 63.752991f }, 1.000000f, -0.186714f, 0); 
    instance.addEObj( "Deepwoodsapling_7", 2003228, 0, 4569643, 4, { 286.250214f, -4.508800f, 57.141289f }, 1.000000f, -1.297356f, 0); 
    instance.addEObj( "Greatergapemaw", 2003229, 0, 4569644, 4, { 206.434402f, -3.828274f, -40.060032f }, 1.000000f, -1.042362f, 0); 
    instance.addEObj( "Greatergapemaw_1", 2003230, 0, 4569645, 4, { 203.114502f, -3.394559f, -27.459700f }, 1.000000f, 0.152400f, 0); 
    instance.addEObj( "Greatergapemaw_2", 2003231, 0, 4569646, 4, { 211.596100f, -4.479522f, -51.478550f }, 1.000000f, -1.559508f, 0); 
    instance.addEObj( "Greatergapemaw_3", 2003232, 0, 4569647, 4, { 231.324295f, -5.301898f, -52.930630f }, 1.000000f, -0.385533f, 0); 
    instance.addEObj( "Greatergapemaw_4", 2003233, 0, 4569648, 4, { 245.611893f, -5.202628f, -41.667759f }, 1.000000f, -1.325491f, 0); 
    instance.addEObj( "Greatergapemaw_5", 2003234, 0, 4569649, 4, { 231.158707f, -3.189421f, -16.280991f }, 1.000000f, 0.425819f, 0); 
    instance.addEObj( "Greatergapemaw_6", 2003235, 0, 4569650, 4, { 215.535202f, -2.485040f, -19.249729f }, 1.000000f, 1.190844f, 0); 
    instance.addEObj( "Destination_13", 2003237, 0, 4544034, 4, { 242.509201f, 3.171883f, 174.738800f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_14", 2003238, 0, 4544035, 4, { 212.800797f, 2.180446f, 124.510101f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_15", 2003239, 0, 4544036, 4, { 420.004486f, -11.947810f, -2.182068f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_16", 2003240, 0, 4544037, 4, { -20.536249f, 18.045280f, 18.219610f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_17", 2003241, 0, 4544038, 4, { 287.296295f, -5.537555f, 26.370331f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Fragrantbloom_4", 2003079, 0, 4536351, 4, { 225.811600f, 6.003866f, 181.787292f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Fragrantbloom_5", 2003080, 0, 4536352, 4, { 278.593506f, -4.781094f, 36.545292f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Fragrantbloom_6", 2003081, 0, 4536353, 4, { 175.275497f, -0.198469f, 57.348770f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Fragrantbloom_7", 2003082, 0, 4536354, 4, { 97.683311f, 7.143996f, -7.903296f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Ritualartifact", 2003075, 0, 4536355, 4, { 126.764000f, 3.093158f, 19.930861f }, 1.500000f, 0.000000f, 0); 
    instance.addEObj( "Ritualartifact_1", 2003076, 0, 4536356, 4, { -19.144520f, 19.335110f, -11.485360f }, 1.500000f, -0.635571f, 0); 
    instance.addEObj( "Ritualartifact_2", 2003077, 0, 4536357, 4, { 315.975494f, -6.837254f, -16.690960f }, 1.500000f, 0.000048f, 0); 
    instance.addEObj( "Ritualartifact_3", 2003078, 0, 4536358, 4, { 232.630203f, -4.500855f, -59.158958f }, 1.500000f, 0.000000f, 0); 
    instance.addEObj( "Ritualartifact_4", 2003303, 0, 4540178, 4, { 267.974091f, -0.139052f, 168.948395f }, 1.500000f, -1.196242f, 0); 
    instance.addEObj( "Fragrantbloom_8", 2003301, 0, 4540179, 4, { 220.316193f, -1.473949f, 100.497803f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Ritualartifact_5", 2003304, 0, 4540180, 4, { 302.897797f, -5.385191f, 60.722450f }, 1.500000f, -0.084814f, 0); 
    instance.addEObj( "Fragrantbloom_9", 2003302, 0, 4540181, 4, { 222.819199f, -2.727977f, -17.219090f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_5", 2003495, 0, 4593329, 4, { 396.750214f, -8.047500f, -1.323600f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Suspiciousobject", 2003037, 0, 4515675, 4, { 287.872894f, -5.639699f, 29.696770f }, 2.975464f, -0.583977f, 0); 
    instance.addEObj( "Suspiciousobject_1", 2003038, 0, 4515676, 4, { 290.811310f, -4.964163f, 52.301262f }, 2.500000f, -1.472846f, 0); 
    instance.addEObj( "Suspiciousobject_2", 2003039, 0, 4515678, 4, { 244.951004f, -1.262776f, 100.521500f }, 3.000000f, 0.877921f, 0); 
    instance.addEObj( "Greaterbanestool", 2003242, 1891418, 4573010, 4, { 251.778397f, -8.209301f, -142.010803f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Greaterbanestool_1", 2003243, 1891426, 4573011, 4, { 207.514099f, -5.522569f, -194.351395f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Greaterbanestool_2", 2003244, 1692526, 4573014, 4, { 207.780197f, -3.514782f, -143.904099f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Greaterbanestool_3", 2003245, 1692537, 4573015, 4, { 326.714111f, -16.365271f, -177.641495f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Greaterbanestool_4", 2003246, 1692505, 4573016, 4, { 387.346985f, -16.979361f, -226.037903f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Greaterbanestool_5", 2003247, 1672198, 4573017, 4, { 373.249786f, -17.692381f, -161.134094f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Greaterbanestool_6", 2003248, 1672181, 4573019, 4, { 272.945190f, -8.224035f, -81.923920f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_18", 2003380, 0, 4572993, 4, { 62.706169f, 3.932236f, 159.040405f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_19", 2003381, 0, 4572994, 4, { 7.451530f, -2.031813f, 184.790298f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_20", 2003382, 0, 4572995, 4, { 58.211010f, 0.944079f, 245.708206f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_21", 2003383, 0, 4572996, 4, { -47.541851f, -1.805159f, 334.940186f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_22", 2003384, 0, 4572997, 4, { -40.328468f, -3.492374f, 187.253998f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_23", 2003385, 0, 4572999, 4, { 64.378967f, 2.166244f, 221.289597f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_24", 2003386, 0, 4573000, 4, { 1.918755f, -7.818126f, 283.832886f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Blazingscalebomb", 2003249, 0, 4546744, 4, { 360.687012f, -17.551809f, -128.061905f }, 0.991760f, -0.431213f, 0); 
    instance.addEObj( "Blazingscalebomb_1", 2003250, 0, 4546746, 4, { 323.790100f, -17.990330f, -217.605499f }, 1.000000f, 0.493296f, 0); 
    instance.addEObj( "Blazingscalebomb_2", 2003251, 0, 4546748, 4, { 442.354889f, -17.981300f, -200.309402f }, 0.991760f, -0.255239f, 0); 
    instance.addEObj( "Blazingscalebomb_3", 2003252, 0, 4546750, 4, { 406.088287f, -16.969971f, -254.966003f }, 0.991760f, 0.245782f, 0); 
    instance.addEObj( "Blazingscalebomb_4", 2003253, 0, 4546752, 4, { 295.952606f, -20.418011f, -300.925415f }, 0.991760f, 1.360010f, 0); 
    instance.addEObj( "Lightningchanneler", 2003142, 0, 4534644, 4, { 286.518585f, -13.687380f, -124.681503f }, 0.991760f, -0.165816f, 0); 
    instance.addEObj( "Lightningchanneler_1", 2003143, 0, 4534645, 4, { 259.082886f, -11.134010f, -167.614700f }, 1.000000f, -1.171536f, 0); 
    instance.addEObj( "Lightningchanneler_2", 2003144, 0, 4534646, 4, { 295.193512f, -12.990950f, -186.870697f }, 1.000000f, 0.111928f, 0); 
    instance.addEObj( "unknown_6", 2003146, 0, 4534655, 4, { 291.174286f, -12.940800f, -155.608002f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Taintedcrystal", 2003145, 0, 4534657, 4, { 291.174286f, -12.940790f, -155.608002f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sylphlandswater", 2003254, 0, 4576583, 4, { 332.246613f, -18.713091f, -202.377502f }, 0.991760f, -0.165337f, 0); 
    instance.addEObj( "Sylphlandswater_1", 2003255, 0, 4576599, 4, { 339.995087f, -19.037540f, -154.292297f }, 0.991760f, -0.205413f, 0); 
    instance.addEObj( "Sylphlandswater_2", 2003256, 0, 4576606, 4, { 451.305115f, -15.596500f, -283.177002f }, 0.991760f, -1.403375f, 0); 
    instance.addEObj( "Sylphlandswater_3", 2003349, 0, 4576613, 4, { 360.851196f, -16.977970f, -250.649200f }, 0.991760f, -0.455939f, 0); 
    instance.addEObj( "Sylphlandswater_4", 2003350, 0, 4576626, 4, { 261.157013f, -21.282379f, -269.947388f }, 0.991760f, -0.890729f, 0); 
    instance.addEObj( "Sylphlandswater_5", 2003351, 0, 4576631, 4, { 442.252197f, -17.375071f, -225.821701f }, 0.991760f, -0.787280f, 0); 
    instance.addEObj( "Moonspore", 2003257, 0, 4576908, 4, { 384.115387f, -33.308289f, -436.665985f }, 1.000000f, 0.000048f, 0); 
    instance.addEObj( "Moonspore_1", 2003258, 0, 4576909, 4, { 392.420807f, -33.550091f, -456.443115f }, 1.000000f, -0.908982f, 0); 
    instance.addEObj( "Moonspore_2", 2003259, 0, 4576910, 4, { 367.051514f, -24.930229f, -440.314087f }, 0.991760f, 1.162919f, 0); 
    instance.addEObj( "Fragrantbloom_10", 2003337, 0, 4576921, 4, { 437.182312f, -14.656990f, -260.032593f }, 0.991760f, 0.309246f, 0); 
    instance.addEObj( "Fragrantbloom_11", 2003338, 0, 4576924, 4, { 303.883301f, -15.976300f, -152.208694f }, 1.000000f, -0.606650f, 0); 
    instance.addEObj( "Fragrantbloom_12", 2003339, 0, 4576930, 4, { 358.288910f, -19.883169f, -207.302704f }, 0.991760f, -0.427364f, 0); 
    instance.addEObj( "Fragrantbloom_13", 2003340, 0, 4576956, 4, { 424.389587f, -18.458300f, -195.803894f }, 1.000000f, 0.000047f, 0); 
    instance.addEObj( "Fragrantbloom_14", 2003341, 0, 4576995, 4, { 306.313690f, -19.641350f, -262.475891f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_7", 2003435, 0, 4578698, 4, { 383.810211f, -65.293404f, -448.508392f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Suspiciouscoffer", 2003040, 0, 4550480, 4, { 326.788513f, -18.087490f, -235.948395f }, 1.000000f, -1.559955f, 0); 
    instance.addEObj( "Suspiciouscoffer_1", 2003041, 0, 4550484, 4, { 386.119293f, -20.186100f, -200.741806f }, 1.000000f, 1.396771f, 0); 
    instance.addEObj( "Suspiciouscoffer_2", 2003042, 0, 4550486, 4, { 439.780304f, -18.176470f, -247.333603f }, 0.991760f, 0.014587f, 0); 
    instance.addEObj( "Suspiciouscoffer_3", 2003491, 0, 4593315, 4, { 398.709015f, -17.430691f, -237.047806f }, 1.000000f, 0.461995f, 0); 
    instance.addEObj( "Suspiciouscoffer_4", 2003492, 0, 4593316, 4, { 387.484009f, -15.018990f, -267.248291f }, 1.000000f, 0.869870f, 0); 
    instance.addEObj( "Suspiciouscoffer_5", 2003493, 0, 4593317, 4, { 356.458405f, -14.073890f, -264.422394f }, 1.000000f, -0.477062f, 0); 
    instance.addEObj( "Suspiciouscoffer_6", 2003494, 0, 4593318, 4, { 319.447601f, -17.211760f, -200.873001f }, 0.991760f, -1.262033f, 0); 
    instance.addEObj( "Chokingscalebombs", 2003307, 0, 4540212, 4, { 261.849915f, -9.295776f, -72.776352f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_25", 2003310, 0, 4540213, 4, { 551.822876f, -22.512110f, -352.106506f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Luminousmoongrass", 2003308, 0, 4540215, 4, { 270.539001f, -12.072570f, -181.486603f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Luminousmoongrass_1", 2003309, 0, 4540216, 4, { 369.399994f, -19.609619f, -156.300003f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Destination_26", 2003260, 0, 4546867, 4, { 375.124603f, -25.634979f, -469.899994f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Luminousmoongrass_2", 2003474, 0, 4589809, 4, { 385.506012f, -15.657810f, -296.532288f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Luminousmoongrass_3", 2003478, 0, 4589810, 4, { 364.799988f, -34.000011f, -432.399994f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Luminousmoongrass_4", 2003479, 0, 4589811, 4, { 389.699585f, -28.098949f, -494.220490f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Luminousmoongrass_5", 2003487, 0, 4589812, 4, { 429.899994f, -14.288640f, -257.600006f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Luminousmoongrass_6", 2003488, 0, 4589813, 4, { 550.054626f, -24.240721f, -329.074493f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Glueygapemaw", 2003097, 0, 4520654, 4, { 184.789093f, -21.871460f, -479.481903f }, 0.991760f, 1.285216f, 0); 
    instance.addEObj( "Glueygapemaw_1", 2003098, 0, 4520656, 4, { 265.386993f, -22.831619f, -373.796112f }, 1.000000f, 1.252951f, 0); 
    instance.addEObj( "Glueygapemaw_2", 2003099, 0, 4520658, 4, { 186.698303f, -21.355909f, -422.540588f }, 1.000000f, -1.340379f, 0); 
    instance.addEObj( "Glueygapemaw_3", 2003100, 0, 4520660, 4, { 130.248199f, -25.170361f, -389.715393f }, 1.000000f, -1.020562f, 0); 
    instance.addEObj( "Glueygapemaw_4", 2003101, 0, 4520662, 4, { 124.653000f, -22.213520f, -473.253906f }, 1.000000f, -1.036785f, 0); 
    instance.addEObj( "Glueygapemaw_5", 2003102, 0, 4520664, 4, { 116.294403f, -20.164480f, -499.883606f }, 1.000000f, -0.335379f, 0); 
    instance.addEObj( "Glueygapemaw_6", 2003104, 0, 4520668, 4, { 205.296799f, -18.645691f, -557.161682f }, 0.991760f, 1.301800f, 0); 
    instance.addEObj( "Sylphlandsspring", 2003105, 0, 4520677, 4, { 173.263901f, -26.747169f, -587.845215f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sylphlandsspring_1", 2003106, 0, 4520678, 4, { 165.260406f, -26.461340f, -576.364807f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sylphlandsspring_2", 2003107, 0, 4520679, 4, { 152.401505f, -27.000000f, -559.358887f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sylphlandsspring_3", 2003108, 0, 4520680, 4, { -36.964890f, -35.553398f, -560.757996f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sylphlandsspring_4", 2003109, 0, 4520682, 4, { -42.568180f, -35.591640f, -533.290527f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Sylphlandsspring_5", 2003110, 0, 4520683, 4, { -18.336990f, -35.602291f, -535.328979f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Milkmistmaker", 2003280, 1909984, 4580513, 4, { 364.431305f, -16.749640f, -238.452805f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Milkmistmaker_1", 2003281, 1909981, 4580514, 4, { 218.510101f, -19.649820f, -404.762909f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Milkmistmaker_2", 2003282, 1909982, 4580516, 4, { 121.303200f, -25.273790f, -348.357910f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Milkmistmaker_3", 2003283, 1909983, 4580530, 4, { 144.885696f, -28.278469f, -224.927200f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Fragrantbloom_15", 2003276, 0, 4580613, 4, { 276.119995f, -12.275450f, -131.393997f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Fragrantbloom_16", 2003277, 0, 4580939, 4, { 351.858887f, -20.609070f, -184.734207f }, 0.991760f, 0.999755f, 0); 
    instance.addEObj( "Fragrantbloom_17", 2003278, 0, 4580941, 4, { 348.973907f, -17.285210f, -230.749496f }, 0.991760f, -1.059342f, 0); 
    instance.addEObj( "Fragrantbloom_18", 2003279, 0, 4580942, 4, { 271.981415f, -19.877180f, -278.152496f }, 0.991760f, -0.682164f, 0); 
    instance.addEObj( "Fragrantbloom_19", 2003437, 0, 4581908, 4, { 259.920898f, -23.496771f, -361.484985f }, 0.991760f, 1.094632f, 0); 
    instance.addEObj( "Fragrantbloom_20", 2003438, 0, 4581909, 4, { 228.985596f, -23.059441f, -421.204407f }, 0.991760f, -0.586900f, 0); 
    instance.addEObj( "Fragrantbloom_21", 2003439, 0, 4581910, 4, { 197.069107f, -21.416519f, -406.999390f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Fragrantbloom_22", 2003440, 0, 4581911, 4, { 153.184906f, -23.864969f, -474.139587f }, 0.991760f, 1.237798f, 0); 
    instance.addEObj( "Fragrantbloom_23", 2003441, 0, 4581912, 4, { 138.908005f, -23.063499f, -301.876099f }, 0.991760f, -0.199776f, 0); 
    instance.addEObj( "Fragrantbloom_24", 2003442, 0, 4581914, 4, { 90.308197f, -27.785410f, -267.084412f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Fragrantbloom_25", 2003443, 0, 4581915, 4, { 105.182899f, -30.148689f, -177.502594f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Fragrantbloom_26", 2003444, 0, 4581916, 4, { 148.863098f, -29.661070f, -206.650696f }, 0.991760f, 1.158832f, 0); 
    instance.addEObj( "Fragrantbloom_27", 2003445, 0, 4581920, 4, { 201.869202f, -21.032129f, -439.100098f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Fragrantbloom_28", 2003446, 0, 4581922, 4, { 97.245728f, -26.339661f, -356.404999f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_27", 2003284, 0, 4551557, 4, { 93.891228f, -30.107050f, -177.120300f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_28", 2003285, 0, 4551559, 4, { 93.810463f, -30.099991f, -177.277695f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Skybulb", 2003290, 0, 4572686, 4, { -10.470580f, -35.200001f, -531.696289f }, 0.991760f, 0.970306f, 0); 
    instance.addEObj( "Ripenedbulb", 2003292, 0, 4572687, 4, { -10.496690f, -35.200001f, -531.702881f }, 0.991760f, 0.970306f, 0); 
    instance.addEObj( "Destination_29", 2003390, 0, 4579390, 4, { 264.635193f, -8.955486f, -78.344856f }, 1.000000f, 0.805802f, 0); 
    instance.addEObj( "Skybulb_1", 2003291, 0, 4589559, 4, { -11.259720f, -35.200001f, -531.717773f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Glimmeringmoongrass", 2003480, 0, 4589814, 4, { 152.899994f, -24.249050f, -451.899994f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Glimmeringmoongrass_1", 2003481, 0, 4589815, 4, { 161.899994f, -26.600000f, -537.119995f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Glimmeringmoongrass_2", 2003482, 0, 4589816, 4, { 302.700012f, -18.917789f, -290.650696f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Glimmeringmoongrass_3", 2003483, 0, 4589817, 4, { 370.700012f, -16.298861f, -257.500000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Glimmeringmoongrass_4", 2003484, 0, 4589818, 4, { 327.199188f, -17.241720f, -191.027802f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Glimmeringmoongrass_5", 2003485, 0, 4589819, 4, { 384.921600f, -20.223400f, -197.555603f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Glimmeringmoongrass_6", 2003486, 0, 4589820, 4, { 262.630188f, -10.190030f, -114.904503f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Glimmeringmoongrass_7", 2003389, 0, 4589976, 4, { 114.593498f, -20.291059f, -501.672394f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Glimmeringmoongrass_8", 2003489, 0, 4592952, 4, { 249.763199f, -24.055559f, -341.115509f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Glimmeringmoongrass_9", 2003490, 0, 4592953, 4, { 293.995514f, -13.852700f, -152.605499f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "unknown_8", 2003533, 0, 4603320, 4, { 91.827003f, -29.593201f, -158.230103f }, 1.000000f, -0.000000f, 0); 
    instance.addEObj( "Schemingsylphs", 2003294, 0, 4573037, 4, { 180.132507f, -23.737551f, -494.878296f }, 0.991760f, 0.480608f, 0); 
    instance.addEObj( "Schemingsylphs_1", 2003295, 0, 4573038, 4, { 155.748795f, -24.399229f, -462.516205f }, 0.991760f, -0.000623f, 0); 
    instance.addEObj( "Schemingsylphs_2", 2003296, 0, 4573039, 4, { 131.732101f, -22.728081f, -560.509583f }, 0.991760f, 1.493497f, 0); 
    instance.addEObj( "Schemingsylphs_3", 2003297, 0, 4573040, 4, { 255.891693f, -23.930281f, -546.654419f }, 0.991760f, -0.598118f, 0); 
    instance.addEObj( "Beehive", 2002610, 0, 4333205, 4, { -487.418915f, 10.025700f, 185.320801f }, 1.480042f, 0.000048f, 0); 
    instance.addEObj( "Beehive_1", 2002611, 0, 4333206, 4, { -502.240814f, 12.346300f, 161.465393f }, 1.500000f, 0.000000f, 0); 
    instance.addEObj( "Beehive_2", 2002612, 0, 4333207, 4, { -474.669006f, 7.223832f, 167.269104f }, 1.480042f, 0.000048f, 0); 
    instance.addEObj( "Curioustussock", 2001902, 0, 4268415, 4, { -386.648407f, -0.007868f, 192.462006f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_30", 2000720, 0, 3725435, 4, { -209.088104f, -4.641913f, 195.804398f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_31", 2000721, 0, 3725436, 4, { -146.023605f, -5.255088f, 199.259598f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_32", 2000722, 0, 3725438, 4, { -173.327301f, 2.188472f, 137.682098f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "TwinAdderstandard", 2000717, 0, 3722267, 4, { -318.501587f, 20.414970f, 393.545410f }, 0.991760f, 0.283564f, 0); 
    instance.addEObj( "TwinAdderstandard_1", 2000718, 0, 3722268, 4, { -363.363098f, 5.072210f, 277.424194f }, 0.991760f, 1.114885f, 0); 
    instance.addEObj( "TwinAdderstandard_2", 2000719, 0, 3722270, 4, { -223.895599f, -5.191019f, 198.352097f }, 0.991760f, -0.967813f, 0); 
    instance.addEObj( "TwinAdderstandard_3", 2002606, 0, 4331866, 4, { -318.501892f, 21.894489f, 393.544586f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "TwinAdderstandard_4", 2002607, 0, 4331867, 4, { -363.336914f, 6.527109f, 277.411591f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "TwinAdderstandard_5", 2002608, 0, 4331868, 4, { -223.904099f, -3.697920f, 198.351593f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Smallcane", 2001909, 0, 4268559, 4, { -221.332199f, 16.034121f, 291.157288f }, 1.500000f, 0.000048f, 0); 
    instance.addEObj( "Youngleaf", 2001910, 0, 4268560, 4, { -230.279999f, 7.193030f, 272.322906f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Youngleaf_1", 2001911, 0, 4268561, 4, { -245.630005f, 11.004320f, 280.890015f }, 1.000000f, -0.375315f, 0); 
    instance.addEObj( "Youngleaf_2", 2001912, 0, 4268562, 4, { -237.970001f, 16.034149f, 289.970001f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Browniebrush", 2001913, 0, 4268626, 4, { -1.935700f, -0.988330f, 340.555603f }, 0.991760f, 0.138108f, 0); 
    instance.addEObj( "Browniebrush_1", 2001914, 0, 4268627, 4, { -35.621410f, -2.551777f, 325.381104f }, 1.000000f, -1.548959f, 0); 
    instance.addEObj( "Browniebrush_2", 2001915, 0, 4268628, 4, { -81.345886f, -2.625674f, 191.790604f }, 0.991760f, 0.185758f, 0); 
    instance.addEObj( "Browniebrush_3", 2001916, 0, 4268629, 4, { -40.970322f, -8.247272f, 224.389999f }, 1.000000f, 0.836054f, 0); 
    instance.addEObj( "Browniebrush_4", 2001917, 0, 4268630, 4, { -44.435322f, -8.768008f, 281.015686f }, 1.000000f, -1.326360f, 0); 
    instance.addEObj( "Suspiciousbox", 2001918, 0, 4268643, 4, { -100.921402f, -8.276004f, 261.430389f }, 1.000000f, 0.662411f, 0); 
    instance.addEObj( "unknown_9", 2002280, 0, 4289810, 4, { -102.004700f, -8.202802f, 259.895813f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Destination_33", 2000711, 0, 3721321, 4, { -78.986153f, -8.375583f, 264.908600f }, 0.991789f, 0.000048f, 0); 
    instance.addEObj( "Suspiciousthicket", 2001920, 0, 4268670, 4, { -54.647831f, -1.055976f, 328.155914f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Suspiciousthicket_1", 2001921, 0, 4268671, 4, { -67.032898f, -3.273622f, 186.999298f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Cloudsilk", 2001922, 0, 4268683, 4, { -244.281693f, 2.853489f, 128.526703f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Cloudsilk_1", 2001923, 0, 4268684, 4, { -223.285294f, 1.979512f, 129.289703f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Cloudsilk_2", 2001924, 0, 4268685, 4, { -194.381897f, 11.070710f, 76.930992f }, 1.000000f, 0.802673f, 0); 
    instance.addEObj( "unknown_10", 2002270, 0, 4289889, 4, { -283.877594f, 12.242350f, -39.334942f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_34", 2001957, 0, 4269047, 4, { 190.570801f, 8.800152f, 187.755402f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "Sylvanlilyseed", 2002190, 0, 4300386, 4, { 233.661407f, 6.449697f, 199.145401f }, 0.500000f, -0.000000f, 0); 
    instance.addEObj( "Sylvanlilyseed_1", 2002191, 0, 4300387, 4, { 189.668198f, 7.954254f, 133.675705f }, 0.500000f, 0.000000f, 0); 
    instance.addEObj( "Sylvanlilyseed_2", 2002192, 0, 4300388, 4, { 181.067902f, 0.077871f, 43.304089f }, 0.500000f, 0.000000f, 0); 
    instance.addEObj( "unknown_11", 2002330, 0, 4300445, 4, { 217.664001f, 11.392100f, 147.400497f }, 1.200000f, 0.027980f, 0); 
    instance.addEObj( "Destination_35", 2002193, 0, 4300516, 4, { 222.033905f, -3.676586f, -25.900640f }, 0.991760f, 0.397259f, 0); 
    instance.addEObj( "unknown_12", 2004032, 0, 4671676, 4, { -318.615601f, 12.254900f, -35.033001f }, 3.500000f, -1.543355f, 0); 
    instance.addEObj( "Sylphlandsaetheryte", 2004430, 0, 4879190, 4, { 198.295807f, -29.803900f, -220.439194f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Entrance_1", 2003047, 0, 4516241, 4, { -318.617188f, 12.128480f, -35.033001f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Barrierthreshold", 2003046, 0, 4516242, 4, { -318.623688f, 12.252930f, -35.050049f }, 0.991760f, -1.543354f, 0); 
    instance.addEObj( "unknown_13", 2003057, 0, 4517325, 4, { -318.615601f, 12.254920f, -35.033001f }, 3.500000f, -1.543355f, 0); 
    instance.addEObj( "Barrierthreshold_1", 2003347, 0, 4550125, 4, { -318.615601f, 12.254920f, -35.033001f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_14", 2003434, 0, 4577483, 4, { -318.615601f, 12.254900f, -35.033001f }, 1.000000f, -1.543355f, 0); 
    instance.addEObj( "Sweetsmellingwildflower", 2004140, 0, 4867989, 4, { 308.138397f, -15.467660f, -136.414597f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_15", 2004139, 0, 4867990, 4, { 376.950989f, -17.823540f, -134.512207f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_16", 2004143, 0, 4868022, 4, { 96.639137f, -26.655270f, -321.145386f }, 1.200000f, 0.000000f, 0); 
    instance.addEObj( "Entrance_2", 2004152, 0, 4841612, 4, { 195.500595f, -31.476770f, -220.428406f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Frayedsack", 2002530, 0, 4323823, 4, { 576.244019f, -23.992371f, -423.743103f }, 1.000000f, 0.676128f, 0); 
    instance.addEObj( "Destination_36", 2002445, 0, 4308347, 4, { 3.160000f, 20.594299f, -13.140000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Aetherometer", 2002446, 0, 4308348, 4, { 3.160000f, 20.594330f, -13.140000f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Treasurecoffer", 2002498, 0, 4321569, 4, { 116.073097f, -21.432310f, -294.891907f }, 1.000000f, -0.221463f, 0); 
    instance.addEObj( "Destination_37", 2002394, 0, 4306624, 4, { -271.534302f, 13.757680f, -51.773930f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_17", 2002395, 0, 4306625, 4, { -271.504700f, 13.176810f, -51.772308f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_18", 2001713, 0, 4101329, 4, { 51.498920f, 7.909368f, 486.490112f }, 1.000000f, 1.407901f, 0); 
    instance.addEObj( "unknown_19", 2001806, 0, 4175894, 4, { 30.342871f, 8.417048f, 475.352997f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "unknown_20", 2004103, 0, 4696198, 4, { -53.624901f, -8.901268f, 298.765411f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_38", 2000710, 0, 3715906, 4, { -296.284485f, 0.346088f, 251.026093f }, 0.991789f, 0.000048f, 0); 
    instance.addEObj( "Smallcane_1", 2000686, 0, 3719061, 4, { -241.152893f, -0.557573f, 212.956802f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Suspiciousboxes", 2000715, 0, 3722151, 4, { -101.015503f, -8.265948f, 261.272614f }, 1.000000f, 0.743996f, 0); 
    instance.addEObj( "Silkstrand", 2000723, 0, 3775548, 4, { -73.319641f, -2.914551f, 189.593307f }, 1.500000f, -0.651753f, 0); 
    instance.addEObj( "Silkstrand_1", 2000723, 0, 3775559, 4, { -189.723495f, 2.737110f, 126.692497f }, 1.500000f, 0.000048f, 0); 
    instance.addEObj( "Silkstrand_2", 2000723, 0, 3775564, 4, { -242.603195f, 11.806290f, 18.966921f }, 1.500000f, 0.000048f, 0); 
    instance.addEObj( "Claxiosleafprint", 2000724, 0, 3775568, 4, { -283.826508f, 12.255220f, -39.326191f }, 0.961304f, 0.000144f, 0); 
    instance.addEObj( "Silkstrand_3", 2000983, 0, 3853767, 4, { -101.501801f, -3.665283f, 189.591904f }, 1.500000f, 0.000048f, 0); 
    instance.addEObj( "Silkstrand_4", 2000983, 0, 3853881, 4, { -223.516800f, 8.639088f, 56.797329f }, 1.500000f, 0.000048f, 0); 
    instance.addEObj( "Silkstrand_5", 2000983, 0, 3875418, 4, { -167.781204f, 1.213504f, 160.362595f }, 1.500000f, -0.782852f, 0); 
    instance.addEObj( "Silkstrand_6", 2000983, 0, 3875420, 4, { -208.565598f, 6.937147f, 82.102966f }, 1.500000f, 0.000048f, 0); 
    instance.addEObj( "unknown_21", 2004682, 0, 5021334, 4, { -395.543488f, 12.303440f, 325.937988f }, 1.000000f, 0.000000f, 0); 
    instance.addEObj( "Destination_39", 2004573, 0, 4951056, 4, { 36.554340f, -3.697749f, 225.780106f }, 0.991760f, 0.000048f, 0); 
    instance.addEObj( "unknown_22", 2004574, 0, 4951057, 4, { -84.082047f, -5.746114f, 321.518005f }, 0.991760f, 0.000048f, 0); 

  }

  void onUpdate( QuestBattle& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( QuestBattle& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( BrotherlyLove );