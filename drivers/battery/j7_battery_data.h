#define CAPACITY_MAX			1000
#define CAPACITY_MAX_MARGIN     70
#define CAPACITY_MIN			0

static sec_bat_adc_table_data_t temp_table[] = {
  {25950, 900},
  {26173, 850},
  {26450, 800},
  {26720, 750},
  {27103, 700},
  {27569, 650},
  {28152, 600},
  {28530, 550},
  {29235, 500},
  {29968, 450},
  {30817, 400},
  {31748, 350},
  {32732, 300},
  {33807, 250},
  {34888, 200},
  {35980, 150},
  {37043, 100},
  {37980, 50},
  {38910, 0},
  {39622, -50},
  {40400, -100},
  {41067, -150},
  {41479, -200},
};


#define TEMP_HIGHLIMIT_THRESHOLD_EVENT		800
#define TEMP_HIGHLIMIT_RECOVERY_EVENT		750
#define TEMP_HIGHLIMIT_THRESHOLD_NORMAL		800
#define TEMP_HIGHLIMIT_RECOVERY_NORMAL		750
#define TEMP_HIGHLIMIT_THRESHOLD_LPM		800
#define TEMP_HIGHLIMIT_RECOVERY_LPM		750

#define TEMP_HIGH_THRESHOLD_EVENT  500
#define TEMP_HIGH_RECOVERY_EVENT   460
#define TEMP_LOW_THRESHOLD_EVENT   0
#define TEMP_LOW_RECOVERY_EVENT    50
#define TEMP_HIGH_THRESHOLD_NORMAL 500
#define TEMP_HIGH_RECOVERY_NORMAL  460
#define TEMP_LOW_THRESHOLD_NORMAL  0
#define TEMP_LOW_RECOVERY_NORMAL   50
#define TEMP_HIGH_THRESHOLD_LPM    510
#define TEMP_HIGH_RECOVERY_LPM     450
#define TEMP_LOW_THRESHOLD_LPM     (-20)
#define TEMP_LOW_RECOVERY_LPM      30

