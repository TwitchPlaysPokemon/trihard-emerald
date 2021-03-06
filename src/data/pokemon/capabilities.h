#define CAP(id) CAPABILITY_##id

const u16 gMonCapabilities[NUM_SPECIES] =
{
    [SPECIES_NONE]        = 0,
    [SPECIES_BULBASAUR]   = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_IVYSAUR]     = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_VENUSAUR]    = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_CHARMANDER]  = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_CHARMELEON]  = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_CHARIZARD]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(FLY) | CAP(CUT),
    [SPECIES_SQUIRTLE]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_WARTORTLE]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_BLASTOISE]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_CATERPIE]    = 0,
    [SPECIES_METAPOD]     = 0,
    [SPECIES_BUTTERFREE]  = CAP(FLASH),
    [SPECIES_WEEDLE]      = 0,
    [SPECIES_KAKUNA]      = 0,
    [SPECIES_BEEDRILL]    = CAP(ROCK_SMASH) | CAP(CUT),
    [SPECIES_PIDGEY]      = CAP(FLY),
    [SPECIES_PIDGEOTTO]   = CAP(FLY),
    [SPECIES_PIDGEOT]     = CAP(FLY),
    [SPECIES_RATTATA]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(CUT),
    [SPECIES_RATICATE]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SPEAROW]     = CAP(FLY),
    [SPECIES_FEAROW]      = CAP(FLY),
    [SPECIES_EKANS]       = CAP(DIG) | CAP(SECRET_POWER) | CAP(STRENGTH),
    [SPECIES_ARBOK]       = CAP(DIG) | CAP(SECRET_POWER) | CAP(STRENGTH),
    [SPECIES_PIKACHU]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_RAICHU]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_SANDSHREW]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SANDSLASH]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_NIDORAN_F]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_NIDORINA]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_NIDOQUEEN]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_NIDORAN_M]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_NIDORINO]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_NIDOKING]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_CLEFAIRY]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_CLEFABLE]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_VULPIX]      = CAP(SECRET_POWER),
    [SPECIES_NINETALES]   = CAP(SECRET_POWER),
    [SPECIES_JIGGLYPUFF]  = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_WIGGLYTUFF]  = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_ZUBAT]       = 0,
    [SPECIES_GOLBAT]      = 0,
    [SPECIES_ODDISH]      = CAP(FLASH) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_GLOOM]       = CAP(FLASH) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_VILEPLUME]   = CAP(FLASH) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_PARAS]       = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(CUT),
    [SPECIES_PARASECT]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(CUT),
    [SPECIES_VENONAT]     = CAP(FLASH),
    [SPECIES_VENOMOTH]    = CAP(FLASH),
    [SPECIES_DIGLETT]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(CUT),
    [SPECIES_DUGTRIO]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(CUT),
    [SPECIES_MEOWTH]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH) | CAP(CUT),
    [SPECIES_PERSIAN]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH) | CAP(CUT),
    [SPECIES_PSYDUCK]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_GOLDUCK]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_MANKEY]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_PRIMEAPE]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_GROWLITHE]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_ARCANINE]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_POLIWAG]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_POLIWHIRL]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_POLIWRATH]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_ABRA]        = CAP(FLASH) | CAP(TELEPORT),
    [SPECIES_KADABRA]     = CAP(FLASH) | CAP(TELEPORT),
    [SPECIES_ALAKAZAM]    = CAP(FLASH) | CAP(TELEPORT),
    [SPECIES_MACHOP]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_MACHOKE]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_MACHAMP]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_BELLSPROUT]  = CAP(FLASH) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_WEEPINBELL]  = CAP(FLASH) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_VICTREEBEL]  = CAP(FLASH) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_TENTACOOL]   = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF) | CAP(CUT),
    [SPECIES_TENTACRUEL]  = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF) | CAP(CUT),
    [SPECIES_GEODUDE]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_GRAVELER]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_GOLEM]       = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_PONYTA]      = CAP(STRENGTH) | CAP(JUMP),
    [SPECIES_RAPIDASH]    = CAP(STRENGTH) | CAP(JUMP),
    [SPECIES_SLOWPOKE]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(FLASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_SLOWBRO]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_MAGNEMITE]   = CAP(FLASH),
    [SPECIES_MAGNETON]    = CAP(FLASH),
    [SPECIES_FARFETCHD]   = CAP(FLY) | CAP(CUT),
    [SPECIES_DODUO]       = CAP(FLY),
    [SPECIES_DODRIO]      = CAP(FLY),
    [SPECIES_SEEL]        = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_DEWGONG]     = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_GRIMER]      = CAP(SECRET_POWER),
    [SPECIES_MUK]         = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_SHELLDER]    = CAP(DIVE) | CAP(SURF),
    [SPECIES_CLOYSTER]    = CAP(DIVE) | CAP(SURF),
    [SPECIES_GASTLY]      = 0,
    [SPECIES_HAUNTER]     = 0,
    [SPECIES_GENGAR]      = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_ONIX]        = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_DROWZEE]     = CAP(FLASH),
    [SPECIES_HYPNO]       = CAP(FLASH),
    [SPECIES_KRABBY]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_KINGLER]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_VOLTORB]     = CAP(FLASH),
    [SPECIES_ELECTRODE]   = CAP(FLASH),
    [SPECIES_EXEGGCUTE]   = CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_EXEGGUTOR]   = CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_CUBONE]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_MAROWAK]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_HITMONLEE]   = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_HITMONCHAN]  = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_LICKITUNG]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_KOFFING]     = CAP(FLASH),
    [SPECIES_WEEZING]     = CAP(FLASH),
    [SPECIES_RHYHORN]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_RHYDON]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_CHANSEY]     = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(SOFT_BOILED),
    [SPECIES_TANGELA]     = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(CUT),
    [SPECIES_KANGASKHAN]  = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_HORSEA]      = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_SEADRA]      = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_GOLDEEN]     = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_SEAKING]     = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_STARYU]      = CAP(DIVE) | CAP(WATERFALL) | CAP(FLASH) | CAP(SURF),
    [SPECIES_STARMIE]     = CAP(DIVE) | CAP(WATERFALL) | CAP(FLASH) | CAP(SURF),
    [SPECIES_MR_MIME]     = CAP(FLASH),
    [SPECIES_SCYTHER]     = CAP(ROCK_SMASH) | CAP(CUT),
    [SPECIES_JYNX]        = CAP(FLASH),
    [SPECIES_ELECTABUZZ]  = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_MAGMAR]      = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_PINSIR]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_TAUROS]      = CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_MAGIKARP]    = 0,
    [SPECIES_GYARADOS]    = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_LAPRAS]      = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_DITTO]       = 0,
    [SPECIES_EEVEE]       = CAP(SECRET_POWER),
    [SPECIES_VAPOREON]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_JOLTEON]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH),
    [SPECIES_FLAREON]     = CAP(SECRET_POWER),
    [SPECIES_PORYGON]     = CAP(FLASH),
    [SPECIES_OMANYTE]     = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(SURF),
    [SPECIES_OMASTAR]     = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(SURF),
    [SPECIES_KABUTO]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(SURF),
    [SPECIES_KABUTOPS]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(SURF) | CAP(CUT),
    [SPECIES_AERODACTYL]  = CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(FLY),
    [SPECIES_SNORLAX]     = CAP(STRENGTH) | CAP(SURF),
    [SPECIES_ARTICUNO]    = CAP(ROCK_SMASH) | CAP(FLY),
    [SPECIES_ZAPDOS]      = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(FLY),
    [SPECIES_MOLTRES]     = CAP(ROCK_SMASH) | CAP(FLY),
    [SPECIES_DRATINI]     = CAP(WATERFALL) | CAP(SURF),
    [SPECIES_DRAGONAIR]   = CAP(WATERFALL) | CAP(SURF),
    [SPECIES_DRAGONITE]   = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(FLY) | CAP(CUT),
    [SPECIES_MEWTWO]      = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_MEW]         = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_CHIKORITA]   = CAP(FLASH) | CAP(CUT),
    [SPECIES_BAYLEEF]     = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_MEGANIUM]    = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_CYNDAQUIL]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(CUT),
    [SPECIES_QUILAVA]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_TYPHLOSION]  = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_TOTODILE]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(SURF) | CAP(CUT),
    [SPECIES_CROCONAW]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_FERALIGATR]  = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_SENTRET]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(SURF) | CAP(CUT),
    [SPECIES_FURRET]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_HOOTHOOT]    = CAP(FLASH) | CAP(FLY),
    [SPECIES_NOCTOWL]     = CAP(FLASH) | CAP(FLY),
    [SPECIES_LEDYBA]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH),
    [SPECIES_LEDIAN]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH),
    [SPECIES_SPINARAK]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH),
    [SPECIES_ARIADOS]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH),
    [SPECIES_CROBAT]      = CAP(FLY),
    [SPECIES_CHINCHOU]    = CAP(DIVE) | CAP(WATERFALL) | CAP(FLASH) | CAP(SURF),
    [SPECIES_LANTURN]     = CAP(DIVE) | CAP(WATERFALL) | CAP(FLASH) | CAP(SURF),
    [SPECIES_PICHU]       = CAP(FLASH),
    [SPECIES_CLEFFA]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH),
    [SPECIES_IGGLYBUFF]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH),
    [SPECIES_TOGEPI]      = CAP(ROCK_SMASH) | CAP(FLASH),
    [SPECIES_TOGETIC]     = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(FLY),
    [SPECIES_NATU]        = CAP(FLASH) | CAP(TELEPORT),
    [SPECIES_XATU]        = CAP(FLASH) | CAP(FLY) | CAP(TELEPORT),
    [SPECIES_MAREEP]      = CAP(FLASH),
    [SPECIES_FLAAFFY]     = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_AMPHAROS]    = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_BELLOSSOM]   = CAP(FLASH) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_MARILL]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_AZUMARILL]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_SUDOWOODO]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_POLITOED]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_HOPPIP]      = CAP(FLASH),
    [SPECIES_SKIPLOOM]    = CAP(FLASH),
    [SPECIES_JUMPLUFF]    = CAP(FLASH),
    [SPECIES_AIPOM]       = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SUNKERN]     = CAP(FLASH) | CAP(CUT),
    [SPECIES_SUNFLORA]    = CAP(FLASH) | CAP(CUT),
    [SPECIES_YANMA]       = CAP(FLASH),
    [SPECIES_WOOPER]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(SURF),
    [SPECIES_QUAGSIRE]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_ESPEON]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH) | CAP(CUT),
    [SPECIES_UMBREON]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH) | CAP(CUT),
    [SPECIES_MURKROW]     = CAP(FLY),
    [SPECIES_SLOWKING]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_MISDREAVUS]  = CAP(FLASH),
    [SPECIES_UNOWN]       = 0,
    [SPECIES_WOBBUFFET]   = 0,
    [SPECIES_GIRAFARIG]   = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_PINECO]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_FORRETRESS]  = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_DUNSPARCE]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_GLIGAR]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_STEELIX]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SNUBBULL]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_GRANBULL]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_QWILFISH]    = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_SCIZOR]      = CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SHUCKLE]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_HERACROSS]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SNEASEL]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_TEDDIURSA]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_URSARING]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SLUGMA]      = CAP(ROCK_SMASH),
    [SPECIES_MAGCARGO]    = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_SWINUB]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_PILOSWINE]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_CORSOLA]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_REMORAID]    = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_OCTILLERY]   = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_DELIBIRD]    = CAP(FLY),
    [SPECIES_MANTINE]     = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_SKARMORY]    = CAP(ROCK_SMASH) | CAP(FLY) | CAP(CUT),
    [SPECIES_HOUNDOUR]    = CAP(ROCK_SMASH),
    [SPECIES_HOUNDOOM]    = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_KINGDRA]     = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_PHANPY]      = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_DONPHAN]     = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_PORYGON2]    = CAP(FLASH),
    [SPECIES_STANTLER]    = CAP(FLASH),
    [SPECIES_SMEARGLE]    = 0,
    [SPECIES_TYROGUE]     = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_HITMONTOP]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_SMOOCHUM]    = CAP(FLASH),
    [SPECIES_ELEKID]      = CAP(ROCK_SMASH) | CAP(FLASH),
    [SPECIES_MAGBY]       = CAP(ROCK_SMASH),
    [SPECIES_MILTANK]     = CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_BLISSEY]     = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(SOFT_BOILED),
    [SPECIES_RAIKOU]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_ENTEI]       = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SUICUNE]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(SURF) | CAP(CUT),
    [SPECIES_LARVITAR]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH),
    [SPECIES_PUPITAR]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH),
    [SPECIES_TYRANITAR]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_LUGIA]       = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(FLY),
    [SPECIES_HO_OH]       = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(FLY),
    [SPECIES_CELEBI]      = CAP(FLASH) | CAP(CUT),
    [SPECIES_TREECKO]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_GROVYLE]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SCEPTILE]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_TORCHIC]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_COMBUSKEN]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_BLAZIKEN]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_MUDKIP]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_MARSHTOMP]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_SWAMPERT]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_POOCHYENA]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH),
    [SPECIES_MIGHTYENA]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_ZIGZAGOON]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(SURF) | CAP(CUT),
    [SPECIES_LINOONE]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_WURMPLE]     = 0,
    [SPECIES_SILCOON]     = 0,
    [SPECIES_BEAUTIFLY]   = CAP(FLASH),
    [SPECIES_CASCOON]     = 0,
    [SPECIES_DUSTOX]      = CAP(FLASH),
    [SPECIES_LOTAD]       = CAP(FLASH) | CAP(SURF),
    [SPECIES_LOMBRE]      = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_LUDICOLO]    = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_SEEDOT]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH),
    [SPECIES_NUZLEAF]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SHIFTRY]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_NINCADA]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH) | CAP(CUT),
    [SPECIES_NINJASK]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH) | CAP(CUT),
    [SPECIES_SHEDINJA]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH) | CAP(CUT),
    [SPECIES_TAILLOW]     = CAP(FLY),
    [SPECIES_SWELLOW]     = CAP(FLY),
    [SPECIES_SHROOMISH]   = CAP(FLASH),
    [SPECIES_BRELOOM]     = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SPINDA]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_WINGULL]     = CAP(FLY),
    [SPECIES_PELIPPER]    = CAP(SURF) | CAP(FLY),
    [SPECIES_SURSKIT]     = CAP(FLASH) | CAP(SWEET_SCENT),
    [SPECIES_MASQUERAIN]  = CAP(FLASH) | CAP(SWEET_SCENT),
    [SPECIES_WAILMER]     = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_WAILORD]     = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_SKITTY]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH),
    [SPECIES_DELCATTY]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_KECLEON]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_BALTOY]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(FLASH),
    [SPECIES_CLAYDOL]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(TELEPORT),
    [SPECIES_NOSEPASS]    = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_TORKOAL]     = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_SABLEYE]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(FLASH) | CAP(CUT),
    [SPECIES_BARBOACH]    = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_WHISCASH]    = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_LUVDISC]     = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_CORPHISH]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_CRAWDAUNT]   = CAP(DIG) | CAP(SECRET_POWER) | CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_FEEBAS]      = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_MILOTIC]     = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_CARVANHA]    = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_SHARPEDO]    = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_TRAPINCH]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_VIBRAVA]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(FLY),
    [SPECIES_FLYGON]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(FLY),
    [SPECIES_MAKUHITA]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_HARIYAMA]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_ELECTRIKE]   = CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_MANECTRIC]   = CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_NUMEL]       = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_CAMERUPT]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_SPHEAL]      = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_SEALEO]      = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_WALREIN]     = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_CACNEA]      = CAP(FLASH) | CAP(CUT),
    [SPECIES_CACTURNE]    = CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SNORUNT]     = CAP(FLASH),
    [SPECIES_GLALIE]      = CAP(FLASH),
    [SPECIES_LUNATONE]    = CAP(FLASH),
    [SPECIES_SOLROCK]     = CAP(FLASH),
    [SPECIES_AZURILL]     = CAP(WATERFALL) | CAP(SURF),
    [SPECIES_SPOINK]      = CAP(FLASH),
    [SPECIES_GRUMPIG]     = CAP(FLASH) | CAP(JUMP),
    [SPECIES_PLUSLE]      = CAP(FLASH),
    [SPECIES_MINUN]       = CAP(FLASH),
    [SPECIES_MAWILE]      = CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SWEET_SCENT),
    [SPECIES_MEDITITE]    = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_MEDICHAM]    = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_SWABLU]      = CAP(FLY),
    [SPECIES_ALTARIA]     = CAP(ROCK_SMASH) | CAP(FLY),
    [SPECIES_WYNAUT]      = 0,
    [SPECIES_DUSKULL]     = CAP(FLASH),
    [SPECIES_DUSCLOPS]    = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH),
    [SPECIES_ROSELIA]     = CAP(FLASH) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_SLAKOTH]     = CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_VIGOROTH]    = CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SLAKING]     = CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT) | CAP(JUMP),
    [SPECIES_GULPIN]      = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_SWALOT]      = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_TROPIUS]     = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(FLY) | CAP(CUT) | CAP(SWEET_SCENT),
    [SPECIES_WHISMUR]     = 0,
    [SPECIES_LOUDRED]     = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_EXPLOUD]     = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_CLAMPERL]    = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_HUNTAIL]     = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_GOREBYSS]    = CAP(DIVE) | CAP(WATERFALL) | CAP(SURF),
    [SPECIES_ABSOL]       = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SHUPPET]     = CAP(FLASH),
    [SPECIES_BANETTE]     = CAP(FLASH),
    [SPECIES_SEVIPER]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_ZANGOOSE]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_RELICANTH]   = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(SURF),
    [SPECIES_ARON]        = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_LAIRON]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_AGGRON]      = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(CUT),
    [SPECIES_CASTFORM]    = CAP(FLASH),
    [SPECIES_VOLBEAT]     = CAP(FLASH) | CAP(SWEET_SCENT),
    [SPECIES_ILLUMISE]    = CAP(FLASH) | CAP(SWEET_SCENT),
    [SPECIES_LILEEP]      = 0,
    [SPECIES_CRADILY]     = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_ANORITH]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(CUT),
    [SPECIES_ARMALDO]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_RALTS]       = CAP(FLASH) | CAP(TELEPORT),
    [SPECIES_KIRLIA]      = CAP(FLASH) | CAP(TELEPORT),
    [SPECIES_GARDEVOIR]   = CAP(FLASH) | CAP(TELEPORT),
    [SPECIES_BAGON]       = CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SHELGON]     = CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_SALAMENCE]   = CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(FLY) | CAP(CUT),
    [SPECIES_BELDUM]      = 0,
    [SPECIES_METANG]      = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_METAGROSS]   = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_REGIROCK]    = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_REGICE]      = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_REGISTEEL]   = CAP(ROCK_SMASH) | CAP(STRENGTH),
    [SPECIES_KYOGRE]      = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF),
    [SPECIES_GROUDON]     = CAP(DIG) | CAP(SECRET_POWER) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_RAYQUAZA]    = CAP(DIVE) | CAP(WATERFALL) | CAP(ROCK_SMASH) | CAP(STRENGTH) | CAP(SURF) | CAP(FLY),
    [SPECIES_LATIAS]      = CAP(DIVE) | CAP(WATERFALL) | CAP(FLASH) | CAP(SURF) | CAP(FLY) | CAP(CUT),
    [SPECIES_LATIOS]      = CAP(DIVE) | CAP(WATERFALL) | CAP(FLASH) | CAP(SURF) | CAP(FLY) | CAP(CUT),
    [SPECIES_JIRACHI]     = CAP(FLASH),
    [SPECIES_DEOXYS]      = CAP(ROCK_SMASH) | CAP(FLASH) | CAP(STRENGTH) | CAP(CUT),
    [SPECIES_CHIMECHO]    = CAP(FLASH),
	
	[SPECIES_OLD_UNOWN_B] = 0,
    [SPECIES_OLD_UNOWN_C] = 0,
    [SPECIES_OLD_UNOWN_D] = 0,
    [SPECIES_OLD_UNOWN_E] = 0,
    [SPECIES_OLD_UNOWN_F] = 0,
    [SPECIES_OLD_UNOWN_G] = 0,
    [SPECIES_OLD_UNOWN_H] = 0,
    [SPECIES_OLD_UNOWN_I] = 0,
    [SPECIES_OLD_UNOWN_J] = 0,
    [SPECIES_OLD_UNOWN_K] = 0,
    [SPECIES_OLD_UNOWN_L] = 0,
    [SPECIES_OLD_UNOWN_M] = 0,
    [SPECIES_OLD_UNOWN_N] = 0,
    [SPECIES_OLD_UNOWN_O] = 0,
    [SPECIES_OLD_UNOWN_P] = 0,
    [SPECIES_OLD_UNOWN_Q] = 0,
    [SPECIES_OLD_UNOWN_R] = 0,
    [SPECIES_OLD_UNOWN_S] = 0,
    [SPECIES_OLD_UNOWN_T] = 0,
    [SPECIES_OLD_UNOWN_U] = 0,
    [SPECIES_OLD_UNOWN_V] = 0,
    [SPECIES_OLD_UNOWN_W] = 0,
    [SPECIES_OLD_UNOWN_X] = 0,
    [SPECIES_OLD_UNOWN_Y] = 0,
    [SPECIES_OLD_UNOWN_Z] = 0,
};
