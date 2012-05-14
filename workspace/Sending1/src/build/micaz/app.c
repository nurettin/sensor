#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 149 "/usr/lib/gcc/avr/4.5.3/include/stddef.h" 3
typedef int ptrdiff_t;
#line 211
typedef unsigned int size_t;
#line 323
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
# 121 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 257
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 294
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 385
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 121 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/string.h" 3
extern void *memset(void *arg_0x2add07d4a7f0, int arg_0x2add07d4aa58, size_t arg_0x2add07d4ad00);
# 71 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x2add07d68020, const void *arg_0x2add07d682f8);
# 23 "/opt/tinyos-2.1.1/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 40 "/opt/tinyos-2.1.1/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 244 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/fuse.h" 3
#line 239
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 217 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;









typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 34 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4260 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4261 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4262 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4263 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4264 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4265 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4266 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4267 {

  uint8_t flat;
  struct __nesc_unnamed4268 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4269 {

  uint8_t flat;
  struct __nesc_unnamed4270 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4271 {

  uint8_t flat;
  struct __nesc_unnamed4272 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4277 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4280 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4289 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4290 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4291 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4292 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4293 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4294 {
  PLATFORM_MHZ = 8
};
# 56 "/opt/tinyos-2.1.1/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4295 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4296 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};

enum __nesc_unnamed4297 {
  PLATFORM_BAUDRATE = 57600L
};
# 12 "Sending.h"
enum __nesc_unnamed4298 {
  AM_SENDER = 6, 
  TIMER_PERIOD_MILLI = 2000
};




#line 17
typedef nx_struct RadyoMsg {
  nx_uint16_t AX;
  nx_uint16_t AY;
} __attribute__((packed)) RadyoMsg;
# 45 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/mts300.h"
enum __nesc_unnamed4299 {

  TOS_MIC_POT_ADDR = 0x5A, 
  TOS_MAG_POT_ADDR = 0x58
};
# 32 "/opt/tinyos-2.1.1/tos/types/Leds.h"
enum __nesc_unnamed4300 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4301 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE, 

  AM_OVERHEAD = 2
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4302 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/opt/tinyos-2.1.1/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4303 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4304 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/tinyos-2.1.1/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4305 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4306 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4307 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 49 "/opt/tinyos-2.1.1/tos/platforms/micaz/platform_message.h"
#line 46
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 55
typedef union message_metadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/opt/tinyos-2.1.1/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 33 "/opt/tinyos-2.1.1/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;

enum __nesc_unnamed4308 {
  IEEE154_BROADCAST_ADDR = 0xffff
};
# 38 "/opt/tinyos-2.1.1/tos/chips/cc2420/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4309 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4310 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 50
typedef union __nesc_unnamed4311 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4312 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4313 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/tinyos-2.1.1/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 32 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;





#line 34
typedef struct timesync_footer_t {

  nx_am_id_t type;
  timesync_radio_t timestamp;
} timesync_footer_t;
# 40 "/opt/tinyos-2.1.1/tos/types/I2C.h"
typedef struct __nesc_unnamed4314 {
} 
#line 40
TI2CExtdAddr;
typedef struct __nesc_unnamed4315 {
} 
#line 41
TI2CBasicAddr;

typedef uint8_t i2c_flags_t;

enum __nesc_unnamed4316 {
  I2C_START = 0x01, 
  I2C_STOP = 0x02, 
  I2C_ACK_END = 0x04
};
# 35 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2C.h"
enum __nesc_unnamed4317 {
  ATM128_I2C_BUSERROR = 0x00, 
  ATM128_I2C_START = 0x08, 
  ATM128_I2C_RSTART = 0x10, 
  ATM128_I2C_MW_SLA_ACK = 0x18, 
  ATM128_I2C_MW_SLA_NACK = 0x20, 
  ATM128_I2C_MW_DATA_ACK = 0x28, 
  ATM128_I2C_MW_DATA_NACK = 0x30, 
  ATM128_I2C_M_ARB_LOST = 0x38, 
  ATM128_I2C_MR_SLA_ACK = 0x40, 
  ATM128_I2C_MR_SLA_NACK = 0x48, 
  ATM128_I2C_MR_DATA_ACK = 0x50, 
  ATM128_I2C_MR_DATA_NACK = 0x58
};
typedef TMilli SendingC__Timer0__precision_tag;
typedef uint16_t SendingC__AccelX__val_t;
typedef uint16_t SendingC__AccelY__val_t;
enum AMQueueP____nesc_unnamed4318 {
  AMQueueP__NUM_CLIENTS = 1U
};
enum CC2420ActiveMessageC____nesc_unnamed4319 {
  CC2420ActiveMessageC__CC2420_AM_SEND_ID = 0U
};
typedef T32khz CC2420ControlP__StartupTimer__precision_tag;
typedef uint32_t CC2420ControlP__StartupTimer__size_type;
typedef uint16_t CC2420ControlP__ReadRssi__val_t;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef uint8_t HplAtm128Timer0AsyncP__Timer__timer_size;
typedef uint16_t HplAtm128Timer1P__CompareA__size_type;
typedef uint16_t HplAtm128Timer1P__Capture__size_type;
typedef uint16_t HplAtm128Timer1P__CompareB__size_type;
typedef uint16_t HplAtm128Timer1P__CompareC__size_type;
typedef uint16_t HplAtm128Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16*/AlarmOne16C__0____nesc_unnamed4320 {
  AlarmOne16C__0__COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TOne /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type;
typedef uint16_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC__0____nesc_unnamed4321 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1____nesc_unnamed4322 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC__2____nesc_unnamed4323 {
  CC2420SpiC__2__CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420TransmitP__PacketTimeStamp__size_type;
typedef T32khz CC2420TransmitP__BackoffTimer__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffTimer__size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC__3____nesc_unnamed4324 {
  CC2420SpiC__3__CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420ReceiveP__PacketTimeStamp__size_type;
typedef T32khz CC2420PacketP__PacketTimeStamp32khz__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStamp32khz__size_type;
typedef T32khz CC2420PacketP__LocalTime32khz__precision_tag;
typedef TMilli CC2420PacketP__LocalTimeMilli__precision_tag;
typedef TMilli CC2420PacketP__PacketTimeStampMilli__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStampMilli__size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum HilTimerMilliC____nesc_unnamed4325 {
  HilTimerMilliC__TIMER_COUNT = 7U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__4____nesc_unnamed4326 {
  CC2420SpiC__4__CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum CC2420TinyosNetworkC____nesc_unnamed4327 {
  CC2420TinyosNetworkC__TINYOS_N_NETWORKS = 1U
};
typedef TMilli SounderP__Timer__precision_tag;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t;
enum /*SendingAppC.SensorMts300C.VoltageC.AdcReadClientC*/AdcReadClientC__1____nesc_unnamed4328 {
  AdcReadClientC__1__ID = 0U, AdcReadClientC__1__HAL_ID = 0U
};
enum /*SendingAppC.SensorMts300C.AccelXC*/AccelXC__0____nesc_unnamed4329 {
  AccelXC__0__ID = 0U
};
typedef TMilli AccelP__Timer__precision_tag;
typedef uint16_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__width_t;
typedef /*AccelReadP.MultiplexX*/ArbitratedReadC__1__width_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__val_t;
typedef /*AccelReadP.MultiplexX*/ArbitratedReadC__1__width_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__val_t;
typedef uint16_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__width_t;
typedef /*AccelReadP.MultiplexY*/ArbitratedReadC__2__width_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__val_t;
typedef /*AccelReadP.MultiplexY*/ArbitratedReadC__2__width_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__val_t;
enum /*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2____nesc_unnamed4330 {
  AdcReadClientC__2__ID = 1U, AdcReadClientC__2__HAL_ID = 1U
};
enum /*SendingAppC.SensorMts300C.AccelYC*/AccelYC__0____nesc_unnamed4331 {
  AccelYC__0__ID = 1U
};
enum /*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3____nesc_unnamed4332 {
  AdcReadClientC__3__ID = 2U, AdcReadClientC__3__HAL_ID = 2U
};
typedef uint16_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Read__val_t;
typedef uint16_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__ActualRead__val_t;
typedef TMilli /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Timer__precision_tag;
typedef uint16_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Read__val_t;
typedef uint16_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__ActualRead__val_t;
typedef TMilli /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Timer__precision_tag;
enum /*PhotoTempDeviceC.Adc*/AdcReadClientC__0____nesc_unnamed4333 {
  AdcReadClientC__0__ID = 3U, AdcReadClientC__0__HAL_ID = 3U
};
typedef uint16_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__width_t;
typedef /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__width_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Read__val_t;
typedef /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__width_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Service__val_t;
typedef uint16_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__width_t;
typedef /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__width_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Read__val_t;
typedef /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__width_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Service__val_t;
enum /*SendingAppC.SensorMts300C.MicC*/MicC__0____nesc_unnamed4334 {
  MicC__0__ID = 0U
};
typedef TI2CBasicAddr MicP__I2CPacket__addr_size;
typedef TMilli MicP__Timer__precision_tag;
enum /*MicDeviceP.I2CPot*/Atm128I2CMasterC__0____nesc_unnamed4335 {
  Atm128I2CMasterC__0__CLIENT_ID = 0U
};
enum Atm128I2CMasterP____nesc_unnamed4336 {
  Atm128I2CMasterP__ATM128_I2C_CLIENT_COUNT = 2U
};
typedef TI2CBasicAddr /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__addr_size;
typedef TI2CBasicAddr /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__addr_size;
typedef TI2CBasicAddr /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__addr_size;
typedef uint16_t /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__width_t;
typedef /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__width_t /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Read__val_t;
typedef /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__width_t /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__val_t;
enum /*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4____nesc_unnamed4337 {
  AdcReadClientC__4__ID = 4U, AdcReadClientC__4__HAL_ID = 4U
};
enum /*SendingAppC.SensorMts300C.MagXC*/MagXC__0____nesc_unnamed4338 {
  MagXC__0__ID = 0U
};
typedef TI2CBasicAddr MagP__I2CPacket__addr_size;
typedef TMilli MagP__Timer__precision_tag;
enum /*MagConfigP.I2CPot*/Atm128I2CMasterC__1____nesc_unnamed4339 {
  Atm128I2CMasterC__1__CLIENT_ID = 1U
};
typedef uint16_t /*MagReadP.AdcX*/ArbitratedReadC__6__width_t;
typedef /*MagReadP.AdcX*/ArbitratedReadC__6__width_t /*MagReadP.AdcX*/ArbitratedReadC__6__Read__val_t;
typedef /*MagReadP.AdcX*/ArbitratedReadC__6__width_t /*MagReadP.AdcX*/ArbitratedReadC__6__Service__val_t;
typedef uint16_t /*MagReadP.AdcY*/ArbitratedReadC__7__width_t;
typedef /*MagReadP.AdcY*/ArbitratedReadC__7__width_t /*MagReadP.AdcY*/ArbitratedReadC__7__Read__val_t;
typedef /*MagReadP.AdcY*/ArbitratedReadC__7__width_t /*MagReadP.AdcY*/ArbitratedReadC__7__Service__val_t;
enum /*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5____nesc_unnamed4340 {
  AdcReadClientC__5__ID = 5U, AdcReadClientC__5__HAL_ID = 5U
};
enum /*SendingAppC.SensorMts300C.MagYC*/MagYC__0____nesc_unnamed4341 {
  MagYC__0__ID = 1U
};
enum /*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6____nesc_unnamed4342 {
  AdcReadClientC__6__ID = 6U, AdcReadClientC__6__HAL_ID = 6U
};
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 51
static error_t MotePlatformP__PlatformInit__init(void );
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 35
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void );
#line 30
static void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP__18__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__makeInput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__makeInput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void );
static void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__set(void );
static void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void );


static void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__set(void );
static void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__clr(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 45 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2add07ea1960);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 45 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2add07ea1960);
# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 61
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 54
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void SendingC__Timer0__fired(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void SendingC__AMControl__startDone(error_t error);
#line 117
static void SendingC__AMControl__stopDone(error_t error);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void SendingC__Boot__booted(void );
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void SendingC__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void SendingC__AccelX__readDone(error_t result, SendingC__AccelX__val_t val);
#line 63
static void SendingC__AccelY__readDone(error_t result, SendingC__AccelY__val_t val);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 50 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );
#line 45
static void LedsP__Leds__led0On(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2add081b6488, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2add0819d318, 
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2add0819d318, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP__SplitControl__start(void );
# 81 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 73 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP__CC2420Transmit__sendDone(message_t * p_msg, error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t CC2420CsmaP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
# 76 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420CsmaP__CC2420Power__startVRegDone(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC2420CsmaP__Resource__granted(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void CC2420CsmaP__sendDone_task__runTask(void );
#line 64
static void CC2420CsmaP__stopDone_task__runTask(void );
#line 64
static void CC2420CsmaP__startDone_task__runTask(void );
# 86 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );
#line 105
static bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );
#line 52
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 70
static uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__fired(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__default__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__syncDone__runTask(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
#line 92
static void CC2420ControlP__SyncResource__granted(void );
# 71 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__sync__runTask(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 78
static error_t CC2420ControlP__Resource__request(void );
# 57 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC2420ControlP__RssiResource__granted(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 37
static void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t control);
# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP__Timer__timer_size HplAtm128Timer0AsyncP__Timer__get(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__reset(void );
#line 45
static void HplAtm128Timer1P__CompareA__set(HplAtm128Timer1P__CompareA__size_type t);










static void HplAtm128Timer1P__CompareA__start(void );


static void HplAtm128Timer1P__CompareA__stop(void );
# 79 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__setEdge(bool up);
#line 55
static void HplAtm128Timer1P__Capture__reset(void );


static void HplAtm128Timer1P__Capture__start(void );


static void HplAtm128Timer1P__Capture__stop(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__default__fired(void );
#line 49
static void HplAtm128Timer1P__CompareC__default__fired(void );
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer1P__Timer__test(void );
#line 52
static HplAtm128Timer1P__Timer__timer_size HplAtm128Timer1P__Timer__get(void );
#line 95
static void HplAtm128Timer1P__Timer__setScale(uint8_t scale);
#line 58
static void HplAtm128Timer1P__Timer__set(HplAtm128Timer1P__Timer__timer_size t);










static void HplAtm128Timer1P__Timer__start(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 92 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
#line 53
static /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);
#line 55
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t NoInitC__Init__init(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void );
#line 55
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void );
#line 42
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void );
# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__size_type t);
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void );
#line 43
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void );
#line 40
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void );
#line 59
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high);
#line 35
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__disable(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );
# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static error_t HplCC2420InterruptsP__CCA__disable(void );
#line 42
static error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void HplCC2420InterruptsP__CCATask__runTask(void );
# 71 "/opt/tinyos-2.1.1/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c8328, 
# 62 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c8328, 
# 91 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c8328, 
# 82 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c8328, 
# 51 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c8328, 
# 71 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x2add086c64d8, 
# 63 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 48 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c5220, 
# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 48 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c5220, 
# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c9158);
# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c9158);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c9158);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c9158);
# 118 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c9158);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 49 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c4020);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/opt/tinyos-2.1.1/tos/system/StateImplP.nc"
uint8_t arg_0x2add0873dd50);
# 66 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/opt/tinyos-2.1.1/tos/system/StateImplP.nc"
uint8_t arg_0x2add0873dd50, 
# 66 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/opt/tinyos-2.1.1/tos/system/StateImplP.nc"
uint8_t arg_0x2add0873dd50);
# 45 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/opt/tinyos-2.1.1/tos/system/StateImplP.nc"
uint8_t arg_0x2add0873dd50, 
# 45 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP__State__forceState(
# 67 "/opt/tinyos-2.1.1/tos/system/StateImplP.nc"
uint8_t arg_0x2add0873dd50, 
# 51 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
uint8_t reqState);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 59 "/opt/tinyos-2.1.1/tos/interfaces/SpiPacket.nc"
static error_t Atm128SpiP__SpiPacket__send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void Atm128SpiP__ResourceArbiter__granted(
# 85 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2add08784060);
# 34 "/opt/tinyos-2.1.1/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 92 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__release(
# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2add08772ae0);
# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__immediateRequest(
# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2add08772ae0);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__request(
# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2add08772ae0);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__default__granted(
# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2add08772ae0);
# 118 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static bool Atm128SpiP__Resource__isOwner(
# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2add08772ae0);
# 72 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 66
static void HplAtm128SpiP__SPI__initMaster(void );
#line 105
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 96
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 80
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 125
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 114
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);
#line 108
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 86
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 99
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 111
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add088451a0);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add088451a0);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add088446e0);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add088446e0);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add08846020);
# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add08846020);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add08846020);
# 118 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(
# 51 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add08846020);
# 80 "/opt/tinyos-2.1.1/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t HplCC2420SpiP__Resource__release(void );
#line 87
static error_t HplCC2420SpiP__Resource__immediateRequest(void );
#line 78
static error_t HplCC2420SpiP__Resource__request(void );
#line 118
static bool HplCC2420SpiP__Resource__isOwner(void );
#line 92
static void HplCC2420SpiP__SubResource__granted(void );
# 44 "/opt/tinyos-2.1.1/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos-2.1.1/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 66 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffTimer__fired(void );
# 63 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
# 51 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
# 24 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC2420TransmitP__SpiResource__granted(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP__StdControl__start(void );









static error_t CC2420TransmitP__StdControl__stop(void );
# 91 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 53 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP__CC2420Config__syncDone(error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP__receiveDone_task__runTask(void );
# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 57 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP__StdControl__start(void );









static error_t CC2420ReceiveP__StdControl__stop(void );
# 77 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg);
# 59 "/opt/tinyos-2.1.1/tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(
#line 55
message_t * msg);
#line 67
static void CC2420PacketP__PacketTimeStamp32khz__set(
#line 62
message_t * msg, 




CC2420PacketP__PacketTimeStamp32khz__size_type value);
# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420PacketP__CC2420PacketBody__getMetadata(message_t * msg);
# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP__PacketTimeSyncOffset__get(
#line 42
message_t * msg);
#line 39
static bool CC2420PacketP__PacketTimeSyncOffset__isSet(
#line 35
message_t * msg);
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 72
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2add08bd3778);
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2add08bd3778, 
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2add08bd3778, 
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 35
static uint32_t RandomMlcgC__Random__rand32(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void UniqueSendP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
#line 64
static error_t UniqueSendP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t UniqueSendP__Send__maxPayloadLength(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t UniqueSendP__Init__init(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t UniqueReceiveP__Init__init(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__DuplicateReceive__default__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void CC2420TinyosNetworkP__grantTask__runTask(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__ActiveSend__send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420TinyosNetworkP__ActiveSend__getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP__BareReceive__default__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__release(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x2add08ce3550);
# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__immediateRequest(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x2add08ce3550);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__request(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x2add08ce3550);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__default__granted(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x2add08ce3550);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__BareSend__default__sendDone(
#line 85
message_t * msg, 



error_t error);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void CC2420ActiveMessageP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 53 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);
# 95 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__default__requestCca(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d7ed60, 
# 95 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d7ed60, 
# 81 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d7ed60, 
# 88 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/opt/tinyos-2.1.1/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(
# 44 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d7e258, 
# 59 "/opt/tinyos-2.1.1/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 95 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__SubBackoff__requestCca(message_t * msg);
#line 81
static void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t CC2420ActiveMessageP__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


CC2420ActiveMessageP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );
#line 83
static void CC2420ActiveMessageP__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t CC2420ActiveMessageP__AMSend__send(
# 39 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d846c0, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP__Snoop__default__receive(
# 41 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d81480, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



CC2420ActiveMessageP__Receive__default__receive(
# 40 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d83908, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t CC2420ActiveMessageP__AMPacket__address(void );









static am_addr_t CC2420ActiveMessageP__AMPacket__destination(
#line 63
message_t * amsg);
#line 92
static void CC2420ActiveMessageP__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t CC2420ActiveMessageP__AMPacket__type(
#line 132
message_t * amsg);
#line 151
static void CC2420ActiveMessageP__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool CC2420ActiveMessageP__AMPacket__isForMe(
#line 122
message_t * amsg);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void SounderP__Timer__fired(void );
# 20 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusAdc.nc"
static uint8_t MicaBusP__Adc3__getChannel(void );
#line 20
static uint8_t MicaBusP__Adc5__getChannel(void );
#line 20
static uint8_t MicaBusP__Adc1__getChannel(void );
#line 20
static uint8_t MicaBusP__Adc6__getChannel(void );
#line 20
static uint8_t MicaBusP__Adc2__getChannel(void );
#line 20
static uint8_t MicaBusP__Adc4__getChannel(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t Atm128AdcP__Init__init(void );
# 110 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 147 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP__AsyncStdControl__start(void );









static error_t Atm128AdcP__AsyncStdControl__stop(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );
#line 73
static void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );
#line 49
static void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 141
static bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
#line 77
static void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );








static void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 60
static void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
#line 55
static Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );










static uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4b328);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__PowerDownCleanup__default__cleanup(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__ResourceDefaultOwner__granted(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static error_t AdcP__Read__read(
# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2add08fd2ac0);
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2add08fd06d8, 
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2add08fcdcd0);
# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getChannel(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2add08fcdcd0);
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2add08fcdcd0);
# 72 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void AdcP__acquiredData__runTask(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t val);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t VoltageP__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t VoltageP__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t VoltageP__Atm128AdcConfig__getPrescaler(void );
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t AccelP__SplitControl__start(void );
#line 109
static error_t AccelP__SplitControl__stop(void );
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AccelP__ConfigY__getRefVoltage(void );
#line 25
static uint8_t AccelP__ConfigY__getChannel(void );
#line 39
static uint8_t AccelP__ConfigY__getPrescaler(void );
#line 32
static uint8_t AccelP__ConfigX__getRefVoltage(void );
#line 25
static uint8_t AccelP__ConfigX__getChannel(void );
#line 39
static uint8_t AccelP__ConfigX__getPrescaler(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void AccelP__stopDone__runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void AccelP__Timer__fired(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__Init__init(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty(void );








static bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4b328);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );








static bool /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__isOwner(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__release(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__request(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error);
#line 117
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error);
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start(void );









static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__read(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__default__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__val_t val);
#line 55
static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__default__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__readDone(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__val_t val);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Resource__granted(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__read(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__default__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__val_t val);
#line 55
static error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__default__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__readDone(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__val_t val);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Resource__granted(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t PhotoTempP__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t PhotoTempP__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t PhotoTempP__Atm128AdcConfig__getPrescaler(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__Init__init(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEmpty(void );








static bool /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__dequeue(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4b328);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release(void );
#line 73
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__default__granted(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__release(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__request(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__default__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 118 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static bool /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__isOwner(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__grantedTask__runTask(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__Init__init(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static bool /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__isEmpty(void );








static bool /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__dequeue(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceDefaultOwner__release(void );








static bool /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceDefaultOwner__isOwner(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Resource__release(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__grantedTask__runTask(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__Init__init(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static bool /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__isEmpty(void );








static bool /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__dequeue(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceDefaultOwner__release(void );








static bool /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceDefaultOwner__isOwner(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Resource__release(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__grantedTask__runTask(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__startDone(error_t error);
#line 117
static void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__stopDone(error_t error);
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__PowerDownCleanup__default__cleanup(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopTask__runTask(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__granted(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__startTask__runTask(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__default__start(void );









static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__default__stop(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__startDone(error_t error);
#line 117
static void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__stopDone(error_t error);
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__PowerDownCleanup__default__cleanup(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopTask__runTask(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__ResourceDefaultOwner__granted(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__startTask__runTask(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__default__start(void );









static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__default__stop(void );
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__start(void );
#line 109
static error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__stop(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__granted(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Read__read(
# 5 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
uint8_t arg_0x2add090fc5c0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__stopDone__runTask(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__ActualRead__readDone(error_t result, /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__ActualRead__val_t val);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Timer__fired(void );
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__start(void );
#line 109
static error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__stop(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__granted(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Read__read(
# 5 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
uint8_t arg_0x2add090fc5c0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__stopDone__runTask(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__ActualRead__readDone(error_t result, /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__ActualRead__val_t val);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Timer__fired(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Read__default__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Read__val_t val);
#line 63
static void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Service__readDone(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Service__val_t val);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Resource__granted(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Read__default__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Read__val_t val);
#line 63
static void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Service__readDone(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Service__val_t val);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Resource__granted(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t MicP__SplitControl__start(void );
#line 109
static error_t MicP__SplitControl__stop(void );
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t MicP__MicAtm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t MicP__MicAtm128AdcConfig__getChannel(void );
#line 39
static uint8_t MicP__MicAtm128AdcConfig__getPrescaler(void );
# 88 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicSetting.nc"
static error_t MicP__MicSetting__default__toneDetected(void );
#line 66
static error_t MicP__MicSetting__gainAdjust(uint8_t val);
#line 62
static error_t MicP__MicSetting__muxSel(uint8_t sel);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void MicP__I2CResource__granted(void );
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void MicP__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void MicP__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void MicP__AlertInterrupt__fired(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void MicP__Timer__fired(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );








static bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4b328);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceDefaultOwner__release(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Resource__release(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Resource__request(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__grantedTask__runTask(void );
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__release(
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add091b5108);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__request(
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add091b5108);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__default__granted(
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add091b5108);
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__writeDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add091b4478, 
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 81
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__write(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add091b4478, 
# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__readDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add091b4478, 
# 91 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__granted(
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add09209460);
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2C.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__Atm128I2C__stop(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__commandComplete(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__start(void );









static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__stop(void );
# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void HplAtm128I2CBusP__I2C__readCurrent(void );
static void HplAtm128I2CBusP__I2C__sendCommand(void );




static void HplAtm128I2CBusP__I2C__setStart(bool on);
#line 45
static uint8_t HplAtm128I2CBusP__I2C__status(void );
#line 60
static void HplAtm128I2CBusP__I2C__enableInterrupt(bool enable);
#line 82
static uint8_t HplAtm128I2CBusP__I2C__read(void );
#line 42
static void HplAtm128I2CBusP__I2C__init(bool hasExternalPulldown);
#line 57
static void HplAtm128I2CBusP__I2C__enableAck(bool enable);
#line 76
static void HplAtm128I2CBusP__I2C__enable(bool on);




static void HplAtm128I2CBusP__I2C__write(uint8_t data);
#line 43
static void HplAtm128I2CBusP__I2C__off(void );
#line 55
static void HplAtm128I2CBusP__I2C__setStop(bool on);
#line 74
static void HplAtm128I2CBusP__I2C__setInterruptPending(bool on);
# 61 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void NoLedsC__Leds__led1On(void );
#line 78
static void NoLedsC__Leds__led2On(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__Init__init(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static bool /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__isEmpty(void );








static bool /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__dequeue(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceDefaultOwner__release(void );








static bool /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceDefaultOwner__isOwner(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Resource__release(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__grantedTask__runTask(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__startDone(error_t error);
#line 117
static void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__stopDone(error_t error);
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__PowerDownCleanup__default__cleanup(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopTask__runTask(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__ResourceDefaultOwner__granted(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__startTask__runTask(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__default__start(void );









static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__default__stop(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Read__default__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Read__val_t val);
#line 55
static error_t /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__default__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__readDone(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__val_t val);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Resource__granted(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t MagP__SplitControl__start(void );
#line 109
static error_t MagP__SplitControl__stop(void );
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t MagP__ConfigY__getRefVoltage(void );
#line 25
static uint8_t MagP__ConfigY__getChannel(void );
#line 39
static uint8_t MagP__ConfigY__getPrescaler(void );
#line 32
static uint8_t MagP__ConfigX__getRefVoltage(void );
#line 25
static uint8_t MagP__ConfigX__getChannel(void );
#line 39
static uint8_t MagP__ConfigX__getPrescaler(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void MagP__I2CResource__granted(void );
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void MagP__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void MagP__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 70 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/Mag.nc"
static error_t MagP__Mag__default__gainAdjustYDone(bool result);
#line 65
static error_t MagP__Mag__default__gainAdjustXDone(bool result);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void MagP__Timer__fired(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__Init__init(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static bool /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__isEmpty(void );








static bool /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__dequeue(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceDefaultOwner__release(void );








static bool /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceDefaultOwner__isOwner(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Resource__release(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__grantedTask__runTask(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__startDone(error_t error);
#line 117
static void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__stopDone(error_t error);
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__PowerDownCleanup__default__cleanup(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopTask__runTask(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__ResourceDefaultOwner__granted(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__startTask__runTask(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__default__start(void );









static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__default__stop(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*MagReadP.AdcX*/ArbitratedReadC__6__Read__default__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*MagReadP.AdcX*/ArbitratedReadC__6__Read__val_t val);
#line 55
static error_t /*MagReadP.AdcX*/ArbitratedReadC__6__Service__default__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*MagReadP.AdcX*/ArbitratedReadC__6__Service__readDone(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*MagReadP.AdcX*/ArbitratedReadC__6__Service__val_t val);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*MagReadP.AdcX*/ArbitratedReadC__6__Resource__granted(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*MagReadP.AdcY*/ArbitratedReadC__7__Read__default__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*MagReadP.AdcY*/ArbitratedReadC__7__Read__val_t val);
#line 55
static error_t /*MagReadP.AdcY*/ArbitratedReadC__7__Service__default__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*MagReadP.AdcY*/ArbitratedReadC__7__Service__readDone(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*MagReadP.AdcY*/ArbitratedReadC__7__Service__val_t val);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*MagReadP.AdcY*/ArbitratedReadC__7__Resource__granted(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 51
static error_t PlatformP__MeasureClock__init(void );
# 42 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void );






static inline error_t PlatformP__Init__init(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 30
static void MotePlatformP__SerialIdPin__clr(void );
# 26 "/opt/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void );

static __inline void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP__18__IO__clr(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeOutput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__makeOutput(void );
# 33 "/opt/tinyos-2.1.1/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4343 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 103
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 61
static void RealMainP__Scheduler__taskLoop(void );
#line 54
static bool RealMainP__Scheduler__runNextTask(void );
# 52 "/opt/tinyos-2.1.1/tos/system/RealMainP.nc"
int main(void )   ;
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 45 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2add07ea1960);
# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 50 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4344 {

  SchedulerBasicP__NUM_TASKS = 37U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 86
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 113
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 138
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 159
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 58 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 97
static inline void McuSleepC__McuSleep__sleep(void );
#line 110
static inline void McuSleepC__McuPowerState__update(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void SendingC__Timer0__startPeriodic(uint32_t dt);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t SendingC__AMControl__start(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t SendingC__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static 
#line 112
void * 


SendingC__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static error_t SendingC__AccelX__read(void );
#line 55
static error_t SendingC__AccelY__read(void );
# 50 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void SendingC__Leds__led0Off(void );
#line 45
static void SendingC__Leds__led0On(void );
# 32 "SendingC.nc"
message_t SendingC__pkt;

int SendingC__sayac = 0;
RadyoMsg *SendingC__btrpkt = (void *)0;
static inline void SendingC__Boot__booted(void );



static inline void SendingC__AMControl__startDone(error_t err);








static inline void SendingC__AMControl__stopDone(error_t err);



static inline void SendingC__Timer0__fired(void );
#line 67
static inline void SendingC__AMSend__sendDone(message_t *bufPtr, error_t error);




static inline void SendingC__AccelX__readDone(error_t error, uint16_t data);



static inline void SendingC__AccelY__readDone(error_t error, uint16_t data);
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 29
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
#line 29
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 29
static void LedsP__Led2__set(void );
# 45 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 63
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static void /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2add081b6488, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2add0819d318, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 63
message_t * msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 132
message_t * amsg);
# 118 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4345 {
#line 118
  AMQueueImplP__0__CancelTask = 0U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4346 {
#line 161
  AMQueueImplP__0__errorTask = 1U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4347 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1 / 8 + 1];

static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 82
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 155
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 181
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void CC2420CsmaP__SplitControl__startDone(error_t error);
#line 117
static void CC2420CsmaP__SplitControl__stopDone(error_t error);
# 95 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg);
#line 81
static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg);
#line 66
static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime);
# 51 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void CC2420CsmaP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t CC2420CsmaP__Random__rand16(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP__SubControl__start(void );









static error_t CC2420CsmaP__SubControl__stop(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg);
# 71 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420CsmaP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420CsmaP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420CsmaP__CC2420Power__stopVReg(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420CsmaP__Resource__release(void );
#line 78
static error_t CC2420CsmaP__Resource__request(void );
# 66 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState);





static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP__sendDone_task__postTask(void );
#line 56
static error_t CC2420CsmaP__stopDone_task__postTask(void );
#line 56
static error_t CC2420CsmaP__startDone_task__postTask(void );
# 74 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP____nesc_unnamed4348 {
#line 74
  CC2420CsmaP__startDone_task = 2U
};
#line 74
typedef int CC2420CsmaP____nesc_sillytask_startDone_task[CC2420CsmaP__startDone_task];
enum CC2420CsmaP____nesc_unnamed4349 {
#line 75
  CC2420CsmaP__stopDone_task = 3U
};
#line 75
typedef int CC2420CsmaP____nesc_sillytask_stopDone_task[CC2420CsmaP__stopDone_task];
enum CC2420CsmaP____nesc_unnamed4350 {
#line 76
  CC2420CsmaP__sendDone_task = 4U
};
#line 76
typedef int CC2420CsmaP____nesc_sillytask_sendDone_task[CC2420CsmaP__sendDone_task];
#line 58
enum CC2420CsmaP____nesc_unnamed4351 {
  CC2420CsmaP__S_STOPPED, 
  CC2420CsmaP__S_STARTING, 
  CC2420CsmaP__S_STARTED, 
  CC2420CsmaP__S_STOPPING, 
  CC2420CsmaP__S_TRANSMITTING
};

message_t * CC2420CsmaP__m_msg;

error_t CC2420CsmaP__sendErr = SUCCESS;


bool CC2420CsmaP__ccaOn;






static inline void CC2420CsmaP__shutdown(void );


static error_t CC2420CsmaP__SplitControl__start(void );
#line 122
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len);
#line 170
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
#line 202
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP__CC2420Power__startVRegDone(void );



static inline void CC2420CsmaP__Resource__granted(void );



static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void );




static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg);






static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg);
#line 241
static inline void CC2420CsmaP__sendDone_task__runTask(void );
#line 254
static inline void CC2420CsmaP__startDone_task__runTask(void );







static inline void CC2420CsmaP__stopDone_task__runTask(void );









static inline void CC2420CsmaP__shutdown(void );
# 53 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
# 55 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt);
# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 29
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP__syncDone__postTask(void );
# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 50 "/opt/tinyos-2.1.1/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void );




static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void );
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 29
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );




static void CC2420ControlP__VREN__makeOutput(void );
#line 29
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 78
static error_t CC2420ControlP__SpiResource__request(void );
#line 110
static error_t CC2420ControlP__SyncResource__release(void );
#line 78
static error_t CC2420ControlP__SyncResource__request(void );
# 76 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 55
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__PANID__write(uint8_t offset, uint8_t * data, uint8_t length);
# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 42
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__RssiResource__release(void );
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 117 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP____nesc_unnamed4352 {
#line 117
  CC2420ControlP__sync = 5U
};
#line 117
typedef int CC2420ControlP____nesc_sillytask_sync[CC2420ControlP__sync];
enum CC2420ControlP____nesc_unnamed4353 {
#line 118
  CC2420ControlP__syncDone = 6U
};
#line 118
typedef int CC2420ControlP____nesc_sillytask_syncDone[CC2420ControlP__syncDone];
#line 85
#line 79
typedef enum CC2420ControlP____nesc_unnamed4354 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;

uint8_t CC2420ControlP__m_tx_power;

uint16_t CC2420ControlP__m_pan;

uint16_t CC2420ControlP__m_short_addr;

bool CC2420ControlP__m_sync_busy;


bool CC2420ControlP__autoAckEnabled;


bool CC2420ControlP__hwAutoAckDefault;


bool CC2420ControlP__addressRecognition;


bool CC2420ControlP__hwAddressRecognition;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );





static inline error_t CC2420ControlP__Init__init(void );
#line 171
static inline error_t CC2420ControlP__Resource__request(void );







static inline error_t CC2420ControlP__Resource__release(void );







static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 199
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 249
static inline error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 279
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );







static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
#line 300
static inline error_t CC2420ControlP__CC2420Config__sync(void );
#line 332
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 359
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );






static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );









static inline void CC2420ControlP__SyncResource__granted(void );
#line 390
static inline void CC2420ControlP__SpiResource__granted(void );




static inline void CC2420ControlP__RssiResource__granted(void );
#line 408
static inline void CC2420ControlP__StartupTimer__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 442
static inline void CC2420ControlP__sync__runTask(void );



static inline void CC2420ControlP__syncDone__runTask(void );









static void CC2420ControlP__writeFsctrl(void );
#line 473
static void CC2420ControlP__writeMdmctrl0(void );
#line 492
static void CC2420ControlP__writeId(void );
#line 509
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data);
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer__overflow(void );
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void );
#line 76
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x);
#line 94
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 122
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void );


static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void );
#line 155
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
#line 178
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 198
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__fired(void );
# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t);
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__fired(void );
#line 49
static void HplAtm128Timer1P__CompareC__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer1P__Timer__overflow(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void );


static inline void HplAtm128Timer1P__Timer__set(uint16_t t);








static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x);
#line 122
static inline void HplAtm128Timer1P__Capture__setEdge(bool up);



static inline void HplAtm128Timer1P__Capture__reset(void );
static inline void HplAtm128Timer1P__CompareA__reset(void );



static inline void HplAtm128Timer1P__Timer__start(void );
static inline void HplAtm128Timer1P__Capture__start(void );
static inline void HplAtm128Timer1P__CompareA__start(void );




static inline void HplAtm128Timer1P__Capture__stop(void );
static inline void HplAtm128Timer1P__CompareA__stop(void );




static inline bool HplAtm128Timer1P__Timer__test(void );
#line 183
static inline void HplAtm128Timer1P__CompareA__set(uint16_t t);
#line 195
void __vector_12(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareB__default__fired(void );
void __vector_13(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareC__default__fired(void );
void __vector_24(void ) __attribute((interrupt))   ;



void __vector_11(void ) __attribute((interrupt))   ;



void __vector_14(void ) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 58
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void );
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void );
#line 45
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t);










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void );


static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void );
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void );
# 65 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );








static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt);
#line 110
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );






static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 52
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 56 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC__0____nesc_unnamed4355 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
#line 122
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void );
# 66 "/opt/tinyos-2.1.1/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0____nesc_unnamed4356 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type ) - 1 - 0, 
  TransformAlarmC__0__MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 91
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void );
#line 136
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 166
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 22 "/opt/tinyos-2.1.1/tos/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void );
# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(uint16_t time);
# 79 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(bool up);
#line 55
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(uint8_t mode);









static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void );
#line 40
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void );
#line 59
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high);
#line 35
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void );
# 57 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired(void );
# 15 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(bool rising);
#line 29
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void );




static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void HplAtm128InterruptSigP__IntSig6__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig1__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig4__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig7__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig2__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig5__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig0__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig3__fired(void );
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void ) __attribute((signal))   ;




void __vector_2(void ) __attribute((signal))   ;




void __vector_3(void ) __attribute((signal))   ;




void __vector_4(void ) __attribute((signal))   ;




void __vector_5(void ) __attribute((signal))   ;




void __vector_6(void ) __attribute((signal))   ;




void __vector_7(void ) __attribute((signal))   ;




void __vector_8(void ) __attribute((signal))   ;
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void );



static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high);
#line 61
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void );
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__disable(void );
#line 61
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );
# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static bool HplCC2420InterruptsP__CC_CCA__get(void );
# 57 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static void HplCC2420InterruptsP__CCA__fired(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t HplCC2420InterruptsP__CCATask__postTask(void );
# 69 "/opt/tinyos-2.1.1/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
enum HplCC2420InterruptsP____nesc_unnamed4357 {
#line 69
  HplCC2420InterruptsP__CCATask = 7U
};
#line 69
typedef int HplCC2420InterruptsP____nesc_sillytask_CCATask[HplCC2420InterruptsP__CCATask];
#line 56
uint8_t HplCC2420InterruptsP__ccaWaitForState;

uint8_t HplCC2420InterruptsP__ccaLastState;

bool HplCC2420InterruptsP__ccaCheckDisabled = FALSE;








static inline void HplCC2420InterruptsP__CCATask__runTask(void );
#line 89
static inline error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void );
#line 105
static inline error_t HplCC2420InterruptsP__CCA__disable(void );
# 59 "/opt/tinyos-2.1.1/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c8328, 
# 91 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c8328, 
# 71 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 34 "/opt/tinyos-2.1.1/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 87
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 78
static error_t CC2420SpiP__SpiResource__request(void );
#line 118
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 92
static void CC2420SpiP__Resource__granted(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2add086c9158);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 88 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4358 {
#line 88
  CC2420SpiP__grant = 8U
};
#line 88
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 63
enum CC2420SpiP____nesc_unnamed4359 {
  CC2420SpiP__RESOURCE_COUNT = 5U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4360 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 126
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 178
static inline uint8_t CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
#line 358
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/opt/tinyos-2.1.1/tos/system/StateImplP.nc"
uint8_t StateImplP__state[4U];

enum StateImplP____nesc_unnamed4361 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static bool StateImplP__State__isState(uint8_t id, uint8_t myState);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t Atm128SpiP__zeroTask__postTask(void );
# 71 "/opt/tinyos-2.1.1/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__release(
# 85 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2add08784060);
# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__immediateRequest(
# 85 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2add08784060);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__request(
# 85 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2add08784060);
# 118 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static bool Atm128SpiP__ResourceArbiter__isOwner(
# 85 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2add08784060);
# 72 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 66
static void Atm128SpiP__Spi__initMaster(void );
#line 96
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 80
static uint8_t Atm128SpiP__Spi__read(void );
#line 125
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 114
static void Atm128SpiP__Spi__setClock(uint8_t speed);
#line 108
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 86
static void Atm128SpiP__Spi__write(uint8_t data);
#line 99
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 111
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__granted(
# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2add08772ae0);
# 80 "/opt/tinyos-2.1.1/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP__ArbiterInfo__inUse(void );
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 241 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4362 {
#line 241
  Atm128SpiP__zeroTask = 9U
};
#line 241
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 91
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4363 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};





static void Atm128SpiP__startSpi(void );
#line 120
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 196
static error_t Atm128SpiP__sendNextPart(void );
#line 241
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 275
static error_t Atm128SpiP__SpiPacket__send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen);
#line 299
static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 339
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id);







static inline error_t Atm128SpiP__Resource__request(uint8_t id);








static inline error_t Atm128SpiP__Resource__release(uint8_t id);









static inline uint8_t Atm128SpiP__Resource__isOwner(uint8_t id);



static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id);



static inline void Atm128SpiP__Resource__default__granted(uint8_t id);
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 92 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 79 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 94
static inline void HplAtm128SpiP__SPI__sleep(void );



static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_17(void ) __attribute((signal))   ;
#line 115
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 130
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 156
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 169
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 183
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 200
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 213
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 39 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1____nesc_unnamed4364 {
#line 39
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add088451a0);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add088451a0);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add088446e0);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add088446e0);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2add08846020);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4365 {
#line 69
  SimpleArbiterP__0__grantedTask = 10U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4366 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4367 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 84
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 124
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
#line 148
static uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
#line 167
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void HplCC2420SpiP__SS__makeOutput(void );
#line 29
static void HplCC2420SpiP__SS__set(void );
static void HplCC2420SpiP__SS__clr(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void HplCC2420SpiP__Resource__granted(void );
#line 110
static error_t HplCC2420SpiP__SubResource__release(void );
#line 87
static error_t HplCC2420SpiP__SubResource__immediateRequest(void );
#line 78
static error_t HplCC2420SpiP__SubResource__request(void );
#line 118
static bool HplCC2420SpiP__SubResource__isOwner(void );
# 51 "/opt/tinyos-2.1.1/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__request(void );




static inline error_t HplCC2420SpiP__Resource__immediateRequest(void );










static inline void HplCC2420SpiP__SubResource__granted(void );







static inline error_t HplCC2420SpiP__Resource__release(void );







static inline bool HplCC2420SpiP__Resource__isOwner(void );
# 51 "/opt/tinyos-2.1.1/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 82
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 95
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 81 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg);
# 59 "/opt/tinyos-2.1.1/tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP__PacketTimeStamp__clear(
#line 55
message_t * msg);
#line 67
static void CC2420TransmitP__PacketTimeStamp__set(
#line 62
message_t * msg, 




CC2420TransmitP__PacketTimeStamp__size_type value);
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
#line 55
static void CC2420TransmitP__CaptureSFD__disable(void );
#line 42
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void );
#line 55
static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt);






static void CC2420TransmitP__BackoffTimer__stop(void );
# 63 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data);
# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
# 73 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error);
# 31 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 29
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg);
# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(
#line 42
message_t * msg);
#line 39
static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(
#line 35
message_t * msg);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP__SpiResource__release(void );
#line 87
static error_t CC2420TransmitP__SpiResource__immediateRequest(void );
#line 78
static error_t CC2420TransmitP__SpiResource__request(void );
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CCA__makeInput(void );
#line 32
static bool CC2420TransmitP__CCA__get(void );
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__SFD__makeInput(void );
#line 32
static bool CC2420TransmitP__SFD__get(void );
# 82 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 99 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 89
typedef enum CC2420TransmitP____nesc_unnamed4368 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_SAMPLE_CCA, 
  CC2420TransmitP__S_BEGIN_TRANSMIT, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT, 
  CC2420TransmitP__S_CANCEL
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4369 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320
};
#line 120
message_t * CC2420TransmitP__m_msg;

bool CC2420TransmitP__m_cca;

uint8_t CC2420TransmitP__m_tx_power;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


int8_t CC2420TransmitP__totalCcaChecks;


uint16_t CC2420TransmitP__myInitialBackoff;


uint16_t CC2420TransmitP__myCongestionBackoff;



static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);

static void CC2420TransmitP__loadTXFIFO(void );
static void CC2420TransmitP__attemptSend(void );
static void CC2420TransmitP__congestionBackoff(void );
static error_t CC2420TransmitP__acquireSpiResource(void );
static inline error_t CC2420TransmitP__releaseSpiResource(void );
static void CC2420TransmitP__signalDone(error_t err);



static inline error_t CC2420TransmitP__Init__init(void );







static inline error_t CC2420TransmitP__StdControl__start(void );










static inline error_t CC2420TransmitP__StdControl__stop(void );
#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
#line 243
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);







static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP__getTime32(uint16_t time);
#line 278
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
#line 375
static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
#line 387
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg);
#line 414
static inline void CC2420TransmitP__SpiResource__granted(void );
#line 452
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 484
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP__BackoffTimer__fired(void );
#line 545
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);
#line 735
static void CC2420TransmitP__attemptSend(void );
#line 780
static void CC2420TransmitP__congestionBackoff(void );






static error_t CC2420TransmitP__acquireSpiResource(void );







static inline error_t CC2420TransmitP__releaseSpiResource(void );
#line 817
static void CC2420TransmitP__loadTXFIFO(void );
#line 842
static void CC2420TransmitP__signalDone(error_t err);
# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
# 86 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void );
#line 105
static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
# 59 "/opt/tinyos-2.1.1/tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP__PacketTimeStamp__clear(
#line 55
message_t * msg);
#line 67
static void CC2420ReceiveP__PacketTimeStamp__set(
#line 62
message_t * msg, 




CC2420ReceiveP__PacketTimeStamp__size_type value);
# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFOP__get(void );
# 63 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SACK__strobe(void );
# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ReceiveP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 87
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 78
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 118
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
#line 43
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 148 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP____nesc_unnamed4370 {
#line 148
  CC2420ReceiveP__receiveDone_task = 11U
};
#line 148
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
#line 89
#line 81
typedef enum CC2420ReceiveP____nesc_unnamed4371 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_DEC, 
  CC2420ReceiveP__S_RX_DEC_WAIT, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4372 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP__SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;





uint8_t CC2420ReceiveP__m_missed_packets;



bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;

message_t * CC2420ReceiveP__m_p_rx_buf;

message_t CC2420ReceiveP__m_rx_buf;
#line 137
CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;



static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );
static inline bool CC2420ReceiveP__passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP__Init__init(void );





static inline error_t CC2420ReceiveP__StdControl__start(void );
#line 171
static inline error_t CC2420ReceiveP__StdControl__stop(void );
#line 186
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);








static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 212
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 508
static inline void CC2420ReceiveP__SpiResource__granted(void );
#line 525
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 663
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 704
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error);






static void CC2420ReceiveP__beginReceive(void );
#line 728
static void CC2420ReceiveP__flush(void );
#line 754
static void CC2420ReceiveP__receive(void );









static void CC2420ReceiveP__waitForNextPacket(void );
#line 808
static void CC2420ReceiveP__reset_state(void );










static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg);
# 98 "/opt/tinyos-2.1.1/tos/chips/cc2420/packet/CC2420PacketP.nc"
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg);







static void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);







static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);



static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg);
#line 137
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg);





static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value);
#line 176
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg);








static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg);
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 37
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4373 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 63 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4374 {
#line 63
  AlarmToTimerC__0__fired = 12U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2add08bd3778);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4375 {
#line 60
  VirtualizeTimerC__0__updateFromTimer = 13U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4376 {

  VirtualizeTimerC__0__NUM_TIMERS = 7, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4377 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 41 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 58
static uint32_t RandomMlcgC__Random__rand32(void );
#line 78
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t UniqueSendP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t UniqueSendP__SubSend__maxPayloadLength(void );
#line 89
static void UniqueSendP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t UniqueSendP__Random__rand16(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void );
#line 45
static error_t UniqueSendP__State__requestState(uint8_t reqState);
# 54 "/opt/tinyos-2.1.1/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP__localSendId;

enum UniqueSendP____nesc_unnamed4378 {
  UniqueSendP__S_IDLE, 
  UniqueSendP__S_SENDING
};


static inline error_t UniqueSendP__Init__init(void );
#line 75
static error_t UniqueSendP__Send__send(message_t *msg, uint8_t len);
#line 95
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void );








static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__DuplicateReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/opt/tinyos-2.1.1/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP____nesc_unnamed4379 {
  am_addr_t source;
  uint8_t dsn;
} UniqueReceiveP__receivedMessages[4];

uint8_t UniqueReceiveP__writeIndex = 0;


uint8_t UniqueReceiveP__recycleSourceElement;

enum UniqueReceiveP____nesc_unnamed4380 {
  UniqueReceiveP__INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP__Init__init(void );









static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);


static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);
#line 111
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 137
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
#line 158
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t CC2420TinyosNetworkP__grantTask__postTask(void );
# 77 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t *p_msg);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__ActiveSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id);
#line 43
static bool CC2420TinyosNetworkP__Queue__isEmpty(void );
#line 60
static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP__BareReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__granted(
# 46 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x2add08ce3550);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__BareSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP__ActiveReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 148 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
enum CC2420TinyosNetworkP____nesc_unnamed4381 {
#line 148
  CC2420TinyosNetworkP__grantTask = 14U
};
#line 148
typedef int CC2420TinyosNetworkP____nesc_sillytask_grantTask[CC2420TinyosNetworkP__grantTask];
#line 66
enum CC2420TinyosNetworkP____nesc_unnamed4382 {
  CC2420TinyosNetworkP__OWNER_NONE = 0xff, 
  CC2420TinyosNetworkP__TINYOS_N_NETWORKS = 1U
};

uint8_t CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
#line 71
uint8_t CC2420TinyosNetworkP__next_owner;

static inline error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len);








static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );



static void *CC2420TinyosNetworkP__ActiveSend__getPayload(message_t *msg, uint8_t len);
#line 118
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error);








static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 148
static inline void CC2420TinyosNetworkP__grantTask__runTask(void );
#line 167
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id);
#line 184
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id);
#line 198
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id);
#line 210
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len);


static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error);








static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client);
# 39 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
enum /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0____nesc_unnamed4383 {
#line 39
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[1];
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );




static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 72
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t CC2420ActiveMessageP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420ActiveMessageP__SubSend__getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void );
# 70 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void );
# 95 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__requestCca(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d7ed60, 
# 95 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d7ed60, 
# 81 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d7ed60, 
# 88 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/opt/tinyos-2.1.1/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__aboutToSend(
# 44 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d7e258, 
# 59 "/opt/tinyos-2.1.1/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void CC2420ActiveMessageP__AMSend__sendDone(
# 39 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d846c0, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP__Snoop__receive(
# 41 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d81480, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/opt/tinyos-2.1.1/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP__Receive__receive(
# 40 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2add08d83908, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC2420ActiveMessageP__RadioResource__release(void );
#line 87
static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void );
#line 78
static error_t CC2420ActiveMessageP__RadioResource__request(void );
# 62 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
uint16_t CC2420ActiveMessageP__pending_length;
message_t *CC2420ActiveMessageP__pending_message = (void *)0;

static void CC2420ActiveMessageP__RadioResource__granted(void );
#line 78
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 122
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void );



static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg);









static inline void CC2420ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg);




static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg);




static inline void CC2420ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type);
#line 181
static inline uint8_t CC2420ActiveMessageP__Packet__payloadLength(message_t *msg);



static inline void CC2420ActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );



static inline void *CC2420ActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len);





static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result);






static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 222
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);





static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg);




static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg);



static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg);
#line 266
static inline message_t *CC2420ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);







static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);

static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg);
# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void SounderP__SounderPin__clr(void );
# 28 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/SounderP.nc"
static inline void SounderP__Timer__fired(void );
# 30 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusP.nc"
static inline uint8_t MicaBusP__Adc1__getChannel(void );
static inline uint8_t MicaBusP__Adc2__getChannel(void );
static inline uint8_t MicaBusP__Adc3__getChannel(void );
static inline uint8_t MicaBusP__Adc4__getChannel(void );
static inline uint8_t MicaBusP__Adc5__getChannel(void );
static inline uint8_t MicaBusP__Adc6__getChannel(void );
# 110 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 72 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void );
#line 73
static void Atm128AdcP__HplAtm128Adc__enableAdc(void );
#line 49
static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 141
static bool Atm128AdcP__HplAtm128Adc__cancel(void );
#line 77
static void Atm128AdcP__HplAtm128Adc__disableAdc(void );








static void Atm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 60
static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void );
# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 78
struct Atm128AdcP____nesc_unnamed4384 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP__f;
#line 82
#line 78
struct Atm128AdcP____nesc_unnamed4384 



Atm128AdcP__nextF;

static inline error_t Atm128AdcP__Init__init(void );
#line 104
static inline error_t Atm128AdcP__AsyncStdControl__start(void );




static inline error_t Atm128AdcP__AsyncStdControl__stop(void );









static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
#line 184
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 208
static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 242
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 147 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP__McuPowerState__update(void );
# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );


static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );


static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );



static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x);
#line 69
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );



static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );




static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 99
void __vector_21(void ) __attribute((signal))   ;








static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
# 39 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4385 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 7U ? (7U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 87
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4b328);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4386 {
#line 75
  ArbiterP__0__grantedTask = 15U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4387 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4388 {
#line 68
  ArbiterP__0__default_owner_id = 7U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4389 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;



static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 108
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 130
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 187
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 199
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);
#line 213
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__ResourceDefaultOwner__release(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__AsyncStdControl__start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__AsyncStdControl__stop(void );
# 59 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__ResourceDefaultOwner__requested(void );









static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__ResourceDefaultOwner__granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__PowerDownCleanup__default__cleanup(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2add08fd2ac0, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2add08fd06d8, 
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2add08fcdcd0);
# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getChannel(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2add08fcdcd0);
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getPrescaler(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2add08fcdcd0);
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t AdcP__acquiredData__postTask(void );
# 103 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
enum AdcP____nesc_unnamed4390 {
#line 103
  AdcP__acquiredData = 16U
};
#line 103
typedef int AdcP____nesc_sillytask_acquiredData[AdcP__acquiredData];
#line 57
enum AdcP____nesc_unnamed4391 {
  AdcP__IDLE, 
  AdcP__ACQUIRE_DATA, 
  AdcP__ACQUIRE_DATA_NOW
};




uint8_t AdcP__state;
uint8_t AdcP__client;
uint16_t AdcP__val;

static inline uint8_t AdcP__channel(void );



static inline uint8_t AdcP__refVoltage(void );



static inline uint8_t AdcP__prescaler(void );



static void AdcP__sample(void );



static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient);








static inline error_t AdcP__Read__read(uint8_t c);







static inline void AdcP__acquiredData__runTask(void );




static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
#line 137
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c);




static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 55
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);



static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);




static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client);


static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);
# 34 "/opt/tinyos-2.1.1/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP__Atm128AdcConfig__getChannel(void );





static inline uint8_t VoltageP__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t VoltageP__Atm128AdcConfig__getPrescaler(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void AccelP__SplitControl__startDone(error_t error);
#line 117
static void AccelP__SplitControl__stopDone(error_t error);
# 20 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusAdc.nc"
static uint8_t AccelP__AccelAdcY__getChannel(void );
#line 20
static uint8_t AccelP__AccelAdcX__getChannel(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t AccelP__stopDone__postTask(void );
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void AccelP__AccelPin__makeOutput(void );
#line 29
static void AccelP__AccelPin__set(void );
static void AccelP__AccelPin__clr(void );
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void AccelP__Timer__startOneShot(uint32_t dt);
# 67 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/AccelP.nc"
enum AccelP____nesc_unnamed4392 {
#line 67
  AccelP__stopDone = 17U
};
#line 67
typedef int AccelP____nesc_sillytask_stopDone[AccelP__stopDone];
#line 30
static inline uint8_t AccelP__ConfigX__getChannel(void );



static inline uint8_t AccelP__ConfigX__getRefVoltage(void );



static inline uint8_t AccelP__ConfigX__getPrescaler(void );



static inline uint8_t AccelP__ConfigY__getChannel(void );



static inline uint8_t AccelP__ConfigY__getRefVoltage(void );



static inline uint8_t AccelP__ConfigY__getPrescaler(void );



static error_t AccelP__SplitControl__start(void );








static inline void AccelP__Timer__fired(void );



static inline void AccelP__stopDone__runTask(void );




static inline error_t AccelP__SplitControl__stop(void );
# 39 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
enum /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1____nesc_unnamed4393 {
  RoundRobinResourceQueueC__1__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__1__SIZE = 2U ? (2U - 1) / 8 + 1 : 0
};

uint8_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__resQ[/*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__SIZE];
uint8_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__last = 0;

static inline void /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__clearEntry(uint8_t id);



static inline error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__Init__init(void );




static inline bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty(void );








static bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue(void );
#line 87
static inline error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4b328);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 43
static bool /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void );
#line 46
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
enum /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1____nesc_unnamed4394 {
#line 75
  ArbiterP__1__grantedTask = 18U
};
#line 75
typedef int /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__grantedTask];
#line 67
enum /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1____nesc_unnamed4395 {
#line 67
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
#line 68
enum /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1____nesc_unnamed4396 {
#line 68
  ArbiterP__1__default_owner_id = 2U
};
#line 69
enum /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1____nesc_unnamed4397 {
#line 69
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__resId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__reqResId;



static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__request(uint8_t id);
#line 108
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__release(uint8_t id);
#line 130
static inline error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 181
static inline uint8_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__isOwner(void );





static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
#line 201
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id);
#line 213
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start(void );
#line 109
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stop(void );
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__postTask(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release(void );








static bool /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__postTask(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start(void );









static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__stop(void );
# 63 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
enum /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0____nesc_unnamed4398 {
#line 63
  PowerManagerP__0__startTask = 19U
};
#line 63
typedef int /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0____nesc_sillytask_startTask[/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask];




enum /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0____nesc_unnamed4399 {
#line 68
  PowerManagerP__0__stopTask = 20U
};
#line 68
typedef int /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0____nesc_sillytask_stopTask[/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask];
#line 60
bool /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopping = FALSE;
bool /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__requested = FALSE;

static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask(void );




static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask(void );





static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start(void );







static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error);




static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error);










static inline error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop(void );







static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__val_t val);
#line 55
static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Resource__release(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Resource__request(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);



static inline error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__read(uint8_t client);



static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Resource__granted(uint8_t client);



static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__1__width_t data);








static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__default__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__1__width_t data);
static inline error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__default__read(uint8_t client);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__val_t val);
#line 55
static error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Resource__release(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Resource__request(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);



static inline error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__read(uint8_t client);



static inline void /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Resource__granted(uint8_t client);



static inline void /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexY*/ArbitratedReadC__2__width_t data);








static inline void /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__default__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexY*/ArbitratedReadC__2__width_t data);
static inline error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__default__read(uint8_t client);
# 20 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusAdc.nc"
static uint8_t PhotoTempP__PhotoTempAdc__getChannel(void );
# 21 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempP.nc"
static inline uint8_t PhotoTempP__Atm128AdcConfig__getChannel(void );



static inline uint8_t PhotoTempP__Atm128AdcConfig__getRefVoltage(void );



static inline uint8_t PhotoTempP__Atm128AdcConfig__getPrescaler(void );
# 39 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
enum /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2____nesc_unnamed4400 {
  RoundRobinResourceQueueC__2__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__2__SIZE = 2U ? (2U - 1) / 8 + 1 : 0
};

uint8_t /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__resQ[/*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__SIZE];
uint8_t /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__last = 0;

static inline void /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__clearEntry(uint8_t id);



static inline error_t /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__Init__init(void );




static inline bool /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEmpty(void );








static bool /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__dequeue(void );
#line 87
static inline error_t /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4b328);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Queue__enqueue(resource_client_id_t id);
#line 43
static bool /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__requested(void );
#line 46
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__granted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
enum /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2____nesc_unnamed4401 {
#line 75
  ArbiterP__2__grantedTask = 21U
};
#line 75
typedef int /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2____nesc_sillytask_grantedTask[/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__grantedTask];
#line 67
enum /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2____nesc_unnamed4402 {
#line 67
  ArbiterP__2__RES_CONTROLLED, ArbiterP__2__RES_GRANTING, ArbiterP__2__RES_IMM_GRANTING, ArbiterP__2__RES_BUSY
};
#line 68
enum /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2____nesc_unnamed4403 {
#line 68
  ArbiterP__2__default_owner_id = 2U
};
#line 69
enum /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2____nesc_unnamed4404 {
#line 69
  ArbiterP__2__NO_RES = 0xFF
};
uint8_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__state = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__RES_CONTROLLED;
uint8_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__resId = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__default_owner_id;
uint8_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__reqResId;



static error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__request(uint8_t id);
#line 108
static error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__release(uint8_t id);
#line 130
static inline error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release(void );
#line 174
static uint8_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__isOwner(uint8_t id);
#line 187
static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__grantedTask__runTask(void );
#line 199
static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__default__granted(uint8_t id);

static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceRequested__default__requested(uint8_t id);



static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__default__granted(void );

static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__default__requested(void );





static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(uint8_t id);

static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(uint8_t id);
# 39 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
enum /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3____nesc_unnamed4405 {
  RoundRobinResourceQueueC__3__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__3__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__resQ[/*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__SIZE];
uint8_t /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__last = 0;

static inline void /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__clearEntry(uint8_t id);



static inline error_t /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__Init__init(void );




static inline bool /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__isEmpty(void );








static inline bool /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__dequeue(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static bool /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Queue__dequeue(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceDefaultOwner__granted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Resource__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
enum /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3____nesc_unnamed4406 {
#line 75
  ArbiterP__3__grantedTask = 22U
};
#line 75
typedef int /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3____nesc_sillytask_grantedTask[/*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__grantedTask];
#line 67
enum /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3____nesc_unnamed4407 {
#line 67
  ArbiterP__3__RES_CONTROLLED, ArbiterP__3__RES_GRANTING, ArbiterP__3__RES_IMM_GRANTING, ArbiterP__3__RES_BUSY
};
#line 68
enum /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3____nesc_unnamed4408 {
#line 68
  ArbiterP__3__default_owner_id = 1U
};
#line 69
enum /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3____nesc_unnamed4409 {
#line 69
  ArbiterP__3__NO_RES = 0xFF
};
uint8_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__state = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__RES_CONTROLLED;
uint8_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__resId = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__default_owner_id;
uint8_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__reqResId;
#line 108
static inline error_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Resource__release(uint8_t id);
#line 130
static inline error_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceDefaultOwner__release(void );
#line 181
static inline uint8_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceDefaultOwner__isOwner(void );





static inline void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__grantedTask__runTask(void );
#line 213
static inline void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__default__configure(uint8_t id);

static inline void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__default__unconfigure(uint8_t id);
# 39 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
enum /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4____nesc_unnamed4410 {
  RoundRobinResourceQueueC__4__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__4__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__resQ[/*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__SIZE];
uint8_t /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__last = 0;

static inline void /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__clearEntry(uint8_t id);



static inline error_t /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__Init__init(void );




static inline bool /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__isEmpty(void );








static inline bool /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__dequeue(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static bool /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Queue__dequeue(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceDefaultOwner__granted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Resource__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
enum /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4____nesc_unnamed4411 {
#line 75
  ArbiterP__4__grantedTask = 23U
};
#line 75
typedef int /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4____nesc_sillytask_grantedTask[/*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__grantedTask];
#line 67
enum /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4____nesc_unnamed4412 {
#line 67
  ArbiterP__4__RES_CONTROLLED, ArbiterP__4__RES_GRANTING, ArbiterP__4__RES_IMM_GRANTING, ArbiterP__4__RES_BUSY
};
#line 68
enum /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4____nesc_unnamed4413 {
#line 68
  ArbiterP__4__default_owner_id = 1U
};
#line 69
enum /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4____nesc_unnamed4414 {
#line 69
  ArbiterP__4__NO_RES = 0xFF
};
uint8_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__state = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__RES_CONTROLLED;
uint8_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__resId = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__default_owner_id;
uint8_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__reqResId;
#line 108
static inline error_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Resource__release(uint8_t id);
#line 130
static inline error_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceDefaultOwner__release(void );
#line 181
static inline uint8_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceDefaultOwner__isOwner(void );





static inline void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__grantedTask__runTask(void );
#line 213
static inline void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__default__configure(uint8_t id);

static inline void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__default__unconfigure(uint8_t id);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__start(void );
#line 109
static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__stop(void );
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopTask__postTask(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__release(void );








static bool /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__isOwner(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__start(void );









static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__stop(void );
# 63 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
enum /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1____nesc_unnamed4415 {
#line 63
  PowerManagerP__1__startTask = 24U
};
#line 63
typedef int /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1____nesc_sillytask_startTask[/*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__startTask];




enum /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1____nesc_unnamed4416 {
#line 68
  PowerManagerP__1__stopTask = 25U
};
#line 68
typedef int /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1____nesc_sillytask_stopTask[/*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopTask];
#line 60
bool /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopping = FALSE;
bool /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__requested = FALSE;

static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__startTask__runTask(void );




static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopTask__runTask(void );
#line 84
static inline error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__default__start(void );







static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__startDone(error_t error);




static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__granted(void );




static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__stopDone(error_t error);










static inline error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__default__stop(void );







static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__PowerDownCleanup__default__cleanup(void );
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__start(void );
#line 109
static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__stop(void );
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopTask__postTask(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__ResourceDefaultOwner__release(void );








static bool /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__ResourceDefaultOwner__isOwner(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__start(void );









static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__stop(void );
# 63 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
enum /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2____nesc_unnamed4417 {
#line 63
  PowerManagerP__2__startTask = 26U
};
#line 63
typedef int /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2____nesc_sillytask_startTask[/*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__startTask];




enum /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2____nesc_unnamed4418 {
#line 68
  PowerManagerP__2__stopTask = 27U
};
#line 68
typedef int /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2____nesc_sillytask_stopTask[/*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopTask];
#line 60
bool /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopping = FALSE;
bool /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__requested = FALSE;

static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__startTask__runTask(void );




static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopTask__runTask(void );
#line 84
static inline error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__default__start(void );







static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__startDone(error_t error);




static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__ResourceDefaultOwner__granted(void );




static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__stopDone(error_t error);










static inline error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__default__stop(void );







static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__PowerDownCleanup__default__cleanup(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__startDone(error_t error);
#line 117
static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__stopDone(error_t error);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__release(void );
#line 78
static error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__request(void );
#line 118
static bool /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__isOwner(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Read__readDone(
# 5 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
uint8_t arg_0x2add090fc5c0, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Read__val_t val);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__stopDone__postTask(void );
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__makeInput(void );

static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__makeOutput(void );
#line 29
static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__set(void );
static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__clr(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__ActualRead__read(void );
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Timer__startOneShot(uint32_t dt);
# 32 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
enum /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0____nesc_unnamed4419 {
#line 32
  PhotoTempControlP__0__stopDone = 28U
};
#line 32
typedef int /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0____nesc_sillytask_stopDone[/*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__stopDone];
#line 16
static inline error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__start(void );




static inline void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__granted(void );





static inline void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Timer__fired(void );




static inline void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__stopDone__runTask(void );




static inline error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__stop(void );






uint8_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__id;

static inline error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Read__read(uint8_t client);




static inline void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__ActualRead__readDone(error_t result, uint16_t val);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__startDone(error_t error);
#line 117
static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__stopDone(error_t error);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__release(void );
#line 78
static error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__request(void );
#line 118
static bool /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__isOwner(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Read__readDone(
# 5 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
uint8_t arg_0x2add090fc5c0, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Read__val_t val);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__stopDone__postTask(void );
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__makeInput(void );

static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__makeOutput(void );
#line 29
static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__set(void );
static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__clr(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__ActualRead__read(void );
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Timer__startOneShot(uint32_t dt);
# 32 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
enum /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1____nesc_unnamed4420 {
#line 32
  PhotoTempControlP__1__stopDone = 29U
};
#line 32
typedef int /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1____nesc_sillytask_stopDone[/*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__stopDone];
#line 16
static inline error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__start(void );




static inline void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__granted(void );





static inline void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Timer__fired(void );




static inline void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__stopDone__runTask(void );




static inline error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__stop(void );






uint8_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__id;

static inline error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Read__read(uint8_t client);




static inline void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__ActualRead__readDone(error_t result, uint16_t val);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Read__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Read__val_t val);
#line 55
static error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Service__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Resource__release(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);







static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Resource__granted(uint8_t client);



static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Service__readDone(uint8_t client, error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__width_t data);








static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Read__default__readDone(uint8_t client, error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__width_t data);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Read__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Read__val_t val);
#line 55
static error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Service__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Resource__release(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);







static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Resource__granted(uint8_t client);



static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Service__readDone(uint8_t client, error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__width_t data);








static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Read__default__readDone(uint8_t client, error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__width_t data);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void MicP__SplitControl__startDone(error_t error);
#line 117
static void MicP__SplitControl__stopDone(error_t error);
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void MicP__MicPower__makeInput(void );

static void MicP__MicPower__makeOutput(void );
#line 29
static void MicP__MicPower__set(void );
static void MicP__MicPower__clr(void );




static void MicP__MicMuxSel__makeOutput(void );
#line 29
static void MicP__MicMuxSel__set(void );
static void MicP__MicMuxSel__clr(void );
# 88 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicSetting.nc"
static error_t MicP__MicSetting__toneDetected(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t MicP__I2CResource__release(void );
#line 78
static error_t MicP__I2CResource__request(void );
# 20 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusAdc.nc"
static uint8_t MicP__MicAdc__getChannel(void );
# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static error_t MicP__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void MicP__AlertInterrupt__disable(void );
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void MicP__Timer__startOneShot(uint32_t dt);
# 49 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
uint8_t MicP__gainData[2];

static error_t MicP__SplitControl__start(void );
#line 66
static inline void MicP__Timer__fired(void );



static inline error_t MicP__SplitControl__stop(void );
#line 84
static inline void MicP__I2CResource__granted(void );








static inline error_t MicP__MicSetting__muxSel(uint8_t sel);
#line 108
static inline error_t MicP__MicSetting__gainAdjust(uint8_t val);
#line 137
static inline error_t MicP__MicSetting__default__toneDetected(void );




static inline void MicP__AlertInterrupt__fired(void );









static inline uint8_t MicP__MicAtm128AdcConfig__getChannel(void );




static inline uint8_t MicP__MicAtm128AdcConfig__getRefVoltage(void );




static inline uint8_t MicP__MicAtm128AdcConfig__getPrescaler(void );








static inline void MicP__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);



static inline void MicP__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);
# 39 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2____nesc_unnamed4421 {
#line 39
  FcfsResourceQueueC__2__NO_ENTRY = 0xFF
};
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[2U];
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void );




static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );



static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
#line 72
static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4b328);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Queue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceDefaultOwner__granted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Resource__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5____nesc_unnamed4422 {
#line 75
  ArbiterP__5__grantedTask = 30U
};
#line 75
typedef int /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5____nesc_sillytask_grantedTask[/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__grantedTask];
#line 67
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5____nesc_unnamed4423 {
#line 67
  ArbiterP__5__RES_CONTROLLED, ArbiterP__5__RES_GRANTING, ArbiterP__5__RES_IMM_GRANTING, ArbiterP__5__RES_BUSY
};
#line 68
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5____nesc_unnamed4424 {
#line 68
  ArbiterP__5__default_owner_id = 2U
};
#line 69
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5____nesc_unnamed4425 {
#line 69
  ArbiterP__5__NO_RES = 0xFF
};
uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__RES_CONTROLLED;
uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__default_owner_id;
uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__reqResId;



static inline error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Resource__request(uint8_t id);
#line 108
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Resource__release(uint8_t id);
#line 130
static inline error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceDefaultOwner__release(void );
#line 187
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__grantedTask__runTask(void );
#line 201
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceRequested__default__requested(uint8_t id);
#line 213
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__default__unconfigure(uint8_t id);
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 59 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2C.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Atm128I2C__stop(void );
# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__granted(
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add091b5108);
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__writeDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add091b4478, 
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__readDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add091b4478, 
# 91 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__release(
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add09209460);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__request(
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2add09209460);





enum /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0____nesc_unnamed4426 {
  Atm128I2CMasterImplP__0__NO_CLIENT = 0xff
};

uint8_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__currentClient = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__NO_CLIENT;

static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__request(uint8_t id);
#line 67
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__granted(uint8_t id);




static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__release(uint8_t id);








static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__write(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);
#line 99
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__readDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data);


static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__writeDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data);



static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__default__granted(uint8_t id);
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__writeDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data);
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__readDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data);
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent(void );
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand(void );




static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStart(bool on);
#line 45
static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__status(void );
#line 60
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(bool enable);
#line 82
static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__read(void );
#line 42
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__init(bool hasExternalPulldown);
#line 57
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(bool enable);
#line 76
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(bool on);




static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(uint8_t data);
#line 43
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__off(void );
#line 55
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(bool on);
#line 74
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(bool on);
# 61 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led1On(void );
#line 78
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led2On(void );
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 86 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
enum /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0____nesc_unnamed4427 {
  Atm128I2CMasterPacketP__0__I2C_OFF = 0, 
  Atm128I2CMasterPacketP__0__I2C_IDLE = 1, 
  Atm128I2CMasterPacketP__0__I2C_BUSY = 2, 
  Atm128I2CMasterPacketP__0__I2C_ADDR = 3, 
  Atm128I2CMasterPacketP__0__I2C_DATA = 4, 
  Atm128I2CMasterPacketP__0__I2C_STARTING = 5, 
  Atm128I2CMasterPacketP__0__I2C_STOPPING = 6, 
  Atm128I2CMasterPacketP__0__I2C_SLAVE_ACK = 7
};

uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_OFF;
i2c_flags_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags;
uint8_t */*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr;
uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen;
uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index;
uint16_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr;
bool /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading = FALSE;

static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__i2c_abort(error_t err);
#line 125
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__start(void );
#line 142
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__stop(void );
#line 211
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);
#line 286
static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__commandComplete(void );
#line 382
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__Atm128I2C__stop(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void HplAtm128I2CBusP__I2C__commandComplete(void );
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void HplAtm128I2CBusP__I2CClk__makeInput(void );
#line 29
static void HplAtm128I2CBusP__I2CClk__set(void );
static void HplAtm128I2CBusP__I2CClk__clr(void );


static void HplAtm128I2CBusP__I2CData__makeInput(void );
#line 29
static void HplAtm128I2CBusP__I2CData__set(void );
static void HplAtm128I2CBusP__I2CData__clr(void );
# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
uint8_t HplAtm128I2CBusP__current;

static inline void HplAtm128I2CBusP__I2C__init(bool hasExternalPulldown);
#line 70
static inline void HplAtm128I2CBusP__I2C__off(void );




static inline uint8_t HplAtm128I2CBusP__I2C__status(void );



static inline void HplAtm128I2CBusP__I2C__sendCommand(void );



static void HplAtm128I2CBusP__I2C__readCurrent(void );




static inline void HplAtm128I2CBusP__I2C__setStart(bool on);
#line 100
static inline void HplAtm128I2CBusP__I2C__setStop(bool on);
#line 113
static inline void HplAtm128I2CBusP__I2C__write(uint8_t data);



static inline uint8_t HplAtm128I2CBusP__I2C__read(void );



static inline void HplAtm128I2CBusP__I2C__enableAck(bool enable);
#line 134
static inline void HplAtm128I2CBusP__I2C__enableInterrupt(bool enable);
#line 155
static inline void HplAtm128I2CBusP__I2C__setInterruptPending(bool on);








static inline void HplAtm128I2CBusP__I2C__enable(bool enable);
#line 182
void __vector_33(void ) __attribute((signal))   ;
# 46 "/opt/tinyos-2.1.1/tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led1On(void );



static inline void NoLedsC__Leds__led2On(void );
# 39 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
enum /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5____nesc_unnamed4428 {
  RoundRobinResourceQueueC__5__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__5__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__resQ[/*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__SIZE];
uint8_t /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__last = 0;

static inline void /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__clearEntry(uint8_t id);



static inline error_t /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__Init__init(void );




static inline bool /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__isEmpty(void );








static inline bool /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__dequeue(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static bool /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Queue__dequeue(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceDefaultOwner__granted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Resource__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
enum /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6____nesc_unnamed4429 {
#line 75
  ArbiterP__6__grantedTask = 31U
};
#line 75
typedef int /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6____nesc_sillytask_grantedTask[/*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__grantedTask];
#line 67
enum /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6____nesc_unnamed4430 {
#line 67
  ArbiterP__6__RES_CONTROLLED, ArbiterP__6__RES_GRANTING, ArbiterP__6__RES_IMM_GRANTING, ArbiterP__6__RES_BUSY
};
#line 68
enum /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6____nesc_unnamed4431 {
#line 68
  ArbiterP__6__default_owner_id = 1U
};
#line 69
enum /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6____nesc_unnamed4432 {
#line 69
  ArbiterP__6__NO_RES = 0xFF
};
uint8_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__state = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__RES_CONTROLLED;
uint8_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__resId = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__default_owner_id;
uint8_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__reqResId;
#line 108
static inline error_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Resource__release(uint8_t id);
#line 130
static inline error_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceDefaultOwner__release(void );
#line 181
static inline uint8_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceDefaultOwner__isOwner(void );





static inline void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__grantedTask__runTask(void );
#line 213
static inline void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__default__configure(uint8_t id);

static inline void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__default__unconfigure(uint8_t id);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__start(void );
#line 109
static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__stop(void );
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopTask__postTask(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__ResourceDefaultOwner__release(void );








static bool /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__ResourceDefaultOwner__isOwner(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__start(void );









static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__stop(void );
# 63 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
enum /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3____nesc_unnamed4433 {
#line 63
  PowerManagerP__3__startTask = 32U
};
#line 63
typedef int /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3____nesc_sillytask_startTask[/*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__startTask];




enum /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3____nesc_unnamed4434 {
#line 68
  PowerManagerP__3__stopTask = 33U
};
#line 68
typedef int /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3____nesc_sillytask_stopTask[/*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopTask];
#line 60
bool /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopping = FALSE;
bool /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__requested = FALSE;

static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__startTask__runTask(void );




static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopTask__runTask(void );
#line 84
static inline error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__default__start(void );







static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__startDone(error_t error);




static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__ResourceDefaultOwner__granted(void );




static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__stopDone(error_t error);










static inline error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__default__stop(void );







static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__PowerDownCleanup__default__cleanup(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Read__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Read__val_t val);
#line 55
static error_t /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Resource__release(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);







static inline void /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Resource__granted(uint8_t client);



static inline void /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__readDone(uint8_t client, error_t result, /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__width_t data);








static inline void /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Read__default__readDone(uint8_t client, error_t result, /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__width_t data);
static inline error_t /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__default__read(uint8_t client);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void MagP__SplitControl__startDone(error_t error);
#line 117
static void MagP__SplitControl__stopDone(error_t error);
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void MagP__MagPower__makeInput(void );

static void MagP__MagPower__makeOutput(void );
#line 29
static void MagP__MagPower__set(void );
static void MagP__MagPower__clr(void );
# 20 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusAdc.nc"
static uint8_t MagP__MagAdcX__getChannel(void );
#line 20
static uint8_t MagP__MagAdcY__getChannel(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t MagP__I2CResource__release(void );
# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static error_t MagP__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 70 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/Mag.nc"
static error_t MagP__Mag__gainAdjustYDone(bool result);
#line 65
static error_t MagP__Mag__gainAdjustXDone(bool result);
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void MagP__Timer__startOneShot(uint32_t dt);
# 22 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
uint8_t MagP__gainData[2];

static error_t MagP__SplitControl__start(void );








static inline void MagP__Timer__fired(void );



static inline error_t MagP__SplitControl__stop(void );
#line 62
static inline void MagP__I2CResource__granted(void );










static inline void MagP__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);




static void MagP__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);
#line 92
static inline uint8_t MagP__ConfigX__getChannel(void );



static inline uint8_t MagP__ConfigX__getRefVoltage(void );



static inline uint8_t MagP__ConfigX__getPrescaler(void );



static inline uint8_t MagP__ConfigY__getChannel(void );



static inline uint8_t MagP__ConfigY__getRefVoltage(void );



static inline uint8_t MagP__ConfigY__getPrescaler(void );



static inline error_t MagP__Mag__default__gainAdjustXDone(bool result);



static inline error_t MagP__Mag__default__gainAdjustYDone(bool result);
# 39 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
enum /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6____nesc_unnamed4435 {
  RoundRobinResourceQueueC__6__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__6__SIZE = 2U ? (2U - 1) / 8 + 1 : 0
};

uint8_t /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__resQ[/*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__SIZE];
uint8_t /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__last = 0;

static inline void /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__clearEntry(uint8_t id);



static inline error_t /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__Init__init(void );




static inline bool /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__isEmpty(void );








static inline bool /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__dequeue(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f48538);
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static bool /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Queue__dequeue(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceDefaultOwner__granted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Resource__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2add08f4c1a0);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
enum /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7____nesc_unnamed4436 {
#line 75
  ArbiterP__7__grantedTask = 34U
};
#line 75
typedef int /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7____nesc_sillytask_grantedTask[/*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__grantedTask];
#line 67
enum /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7____nesc_unnamed4437 {
#line 67
  ArbiterP__7__RES_CONTROLLED, ArbiterP__7__RES_GRANTING, ArbiterP__7__RES_IMM_GRANTING, ArbiterP__7__RES_BUSY
};
#line 68
enum /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7____nesc_unnamed4438 {
#line 68
  ArbiterP__7__default_owner_id = 2U
};
#line 69
enum /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7____nesc_unnamed4439 {
#line 69
  ArbiterP__7__NO_RES = 0xFF
};
uint8_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__state = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__RES_CONTROLLED;
uint8_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__resId = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__default_owner_id;
uint8_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__reqResId;
#line 108
static error_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Resource__release(uint8_t id);
#line 130
static inline error_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceDefaultOwner__release(void );
#line 181
static inline uint8_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceDefaultOwner__isOwner(void );





static inline void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__grantedTask__runTask(void );
#line 213
static inline void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__default__configure(uint8_t id);

static inline void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__default__unconfigure(uint8_t id);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__start(void );
#line 109
static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__stop(void );
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopTask__postTask(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__ResourceDefaultOwner__release(void );








static bool /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__ResourceDefaultOwner__isOwner(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__start(void );









static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__stop(void );
# 63 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
enum /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4____nesc_unnamed4440 {
#line 63
  PowerManagerP__4__startTask = 35U
};
#line 63
typedef int /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4____nesc_sillytask_startTask[/*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__startTask];




enum /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4____nesc_unnamed4441 {
#line 68
  PowerManagerP__4__stopTask = 36U
};
#line 68
typedef int /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4____nesc_sillytask_stopTask[/*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopTask];
#line 60
bool /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopping = FALSE;
bool /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__requested = FALSE;

static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__startTask__runTask(void );




static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopTask__runTask(void );
#line 84
static inline error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__default__start(void );







static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__startDone(error_t error);




static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__ResourceDefaultOwner__granted(void );




static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__stopDone(error_t error);










static inline error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__default__stop(void );







static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__PowerDownCleanup__default__cleanup(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*MagReadP.AdcX*/ArbitratedReadC__6__Read__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*MagReadP.AdcX*/ArbitratedReadC__6__Read__val_t val);
#line 55
static error_t /*MagReadP.AdcX*/ArbitratedReadC__6__Service__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*MagReadP.AdcX*/ArbitratedReadC__6__Resource__release(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);







static inline void /*MagReadP.AdcX*/ArbitratedReadC__6__Resource__granted(uint8_t client);



static inline void /*MagReadP.AdcX*/ArbitratedReadC__6__Service__readDone(uint8_t client, error_t result, /*MagReadP.AdcX*/ArbitratedReadC__6__width_t data);








static inline void /*MagReadP.AdcX*/ArbitratedReadC__6__Read__default__readDone(uint8_t client, error_t result, /*MagReadP.AdcX*/ArbitratedReadC__6__width_t data);
static inline error_t /*MagReadP.AdcX*/ArbitratedReadC__6__Service__default__read(uint8_t client);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*MagReadP.AdcY*/ArbitratedReadC__7__Read__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ffc6b8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*MagReadP.AdcY*/ArbitratedReadC__7__Read__val_t val);
#line 55
static error_t /*MagReadP.AdcY*/ArbitratedReadC__7__Service__read(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff9390);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*MagReadP.AdcY*/ArbitratedReadC__7__Resource__release(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2add08ff8e30);







static inline void /*MagReadP.AdcY*/ArbitratedReadC__7__Resource__granted(uint8_t client);



static inline void /*MagReadP.AdcY*/ArbitratedReadC__7__Service__readDone(uint8_t client, error_t result, /*MagReadP.AdcY*/ArbitratedReadC__7__width_t data);








static inline void /*MagReadP.AdcY*/ArbitratedReadC__7__Read__default__readDone(uint8_t client, error_t result, /*MagReadP.AdcY*/ArbitratedReadC__7__width_t data);
static inline error_t /*MagReadP.AdcY*/ArbitratedReadC__7__Service__default__read(uint8_t client);
# 86 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 86
{
   __asm volatile ("cli" :  :  : "memory");}

#line 103
#line 102
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 112
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 113 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 46
  SchedulerBasicP__Scheduler__init();
#line 46
}
#line 46
# 42 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 58 "/opt/tinyos-2.1.1/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 81
{
#line 81
  union __nesc_unnamed4442 {
#line 81
    Atm128TimerCtrlCapture_t f;
#line 81
    uint16_t t;
  } 
#line 81
  c = { .f = x };

#line 81
  return c.t;
}





static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x)
#line 88
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P__TimerCtrlCapture2int(x);
}

#line 71
static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void )
#line 71
{
  return * (Atm128TimerCtrlCapture_t * )& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 61
static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s)
#line 61
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P__TimerCtrl__getCtrlCapture();

#line 63
  x.bits.cs = s;
  HplAtm128Timer1P__TimerCtrl__setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 95
  HplAtm128Timer1P__Timer__setScale(scale);
#line 95
}
#line 95
# 131 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__start(void )
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 69 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 69
  HplAtm128Timer1P__Timer__start();
#line 69
}
#line 69
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__set(uint16_t t)
#line 52
{
#line 52
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 58 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 58
  HplAtm128Timer1P__Timer__set(t);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(4);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x)
#line 51
{
#line 51
  union __nesc_unnamed4443 {
#line 51
    Atm128Adcsra_t f;
#line 51
    uint8_t t;
  } 
#line 51
  c = { .f = x };

#line 51
  return c.t;
}




static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x)
#line 57
{
  * (volatile uint8_t *)(0x06 + 0x20) = HplAtm128AdcP__Adcsra2int(x);
}

# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra){
#line 60
  HplAtm128AdcP__HplAtm128Adc__setAdcsra(adcsra);
#line 60
}
#line 60
# 84 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__Init__init(void )
#line 84
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adfr = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = Atm128AdcP__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 33
}
#line 33
# 26 "/opt/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 26
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.1.1/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP__power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = MagP__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 84 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__default__start(void )
#line 84
{
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__default__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 63 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__startTask__runTask(void )
#line 63
{
  /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__start();
  /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__start();
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )52U |= 1 << 5;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MagP__MagPower__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeOutput();
#line 35
}
#line 35
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )53U |= 1 << 5;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MagP__MagPower__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__set();
#line 29
}
#line 29
# 222 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 125
  unsigned long __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 148 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void MagP__Timer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(6U, dt);
#line 62
}
#line 62
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 86 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 94 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void )
#line 94
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 102 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__stopDone(error_t error)
#line 102
{
  if (/*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__requested == TRUE) {
      /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__start();
      /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__requested = FALSE;
      /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopping = FALSE;
    }
#line 110
    __nesc_atomic_end(__nesc_atomic); }
}

# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void MagP__SplitControl__stopDone(error_t error){
#line 117
  /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__stopDone(error);
#line 117
}
#line 117
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )52U &= ~(1 << 5);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MagP__MagPower__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__makeInput();
#line 33
}
#line 33
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )53U &= ~(1 << 5);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MagP__MagPower__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP__21__IO__clr();
#line 30
}
#line 30
# 37 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static inline error_t MagP__SplitControl__stop(void )
{
  MagP__MagPower__clr();
  MagP__MagPower__makeInput();

  MagP__SplitControl__stopDone(SUCCESS);
  return SUCCESS;
}

# 109 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__stop(void ){
#line 109
  unsigned char __nesc_result;
#line 109

#line 109
  __nesc_result = MagP__SplitControl__stop();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 113 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__default__stop(void )
#line 113
{
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__default__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 121 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__PowerDownCleanup__default__cleanup(void )
#line 121
{
}

# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
inline static void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__PowerDownCleanup__cleanup(void ){
#line 52
  /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__PowerDownCleanup__default__cleanup();
#line 52
}
#line 52
# 68 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopTask__runTask(void )
#line 68
{
  /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__PowerDownCleanup__cleanup();
  /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__StdControl__stop();
  /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__stop();
}

# 31 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client)
#line 31
{
  return /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(client);
}

#line 49
static inline error_t /*MagReadP.AdcY*/ArbitratedReadC__7__Service__default__read(uint8_t client)
#line 49
{
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t /*MagReadP.AdcY*/ArbitratedReadC__7__Service__read(uint8_t arg_0x2add08ff9390){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  switch (arg_0x2add08ff9390) {
#line 55
    case /*SendingAppC.SensorMts300C.MagYC*/MagYC__0__ID:
#line 55
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6__ID);
#line 55
      break;
#line 55
    default:
#line 55
      __nesc_result = /*MagReadP.AdcY*/ArbitratedReadC__7__Service__default__read(arg_0x2add08ff9390);
#line 55
      break;
#line 55
    }
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*MagReadP.AdcY*/ArbitratedReadC__7__Resource__granted(uint8_t client)
#line 35
{
  /*MagReadP.AdcY*/ArbitratedReadC__7__Service__read(client);
}











static inline error_t /*MagReadP.AdcX*/ArbitratedReadC__6__Service__default__read(uint8_t client)
#line 49
{
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t /*MagReadP.AdcX*/ArbitratedReadC__6__Service__read(uint8_t arg_0x2add08ff9390){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  switch (arg_0x2add08ff9390) {
#line 55
    case /*SendingAppC.SensorMts300C.MagXC*/MagXC__0__ID:
#line 55
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5__ID);
#line 55
      break;
#line 55
    default:
#line 55
      __nesc_result = /*MagReadP.AdcX*/ArbitratedReadC__6__Service__default__read(arg_0x2add08ff9390);
#line 55
      break;
#line 55
    }
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*MagReadP.AdcX*/ArbitratedReadC__6__Resource__granted(uint8_t client)
#line 35
{
  /*MagReadP.AdcX*/ArbitratedReadC__6__Service__read(client);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Resource__granted(uint8_t arg_0x2add08f4c1a0){
#line 92
  /*MagReadP.AdcX*/ArbitratedReadC__6__Resource__granted(arg_0x2add08f4c1a0);
#line 92
  /*MagReadP.AdcY*/ArbitratedReadC__7__Resource__granted(arg_0x2add08f4c1a0);
#line 92
}
#line 92
# 213 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__configure(uint8_t arg_0x2add08f48538){
#line 49
    /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__default__configure(arg_0x2add08f48538);
#line 49
}
#line 49
# 187 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__grantedTask__runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__resId = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__reqResId;
      /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__state = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__configure(/*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__resId);
  /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Resource__granted(/*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__resId);
}






static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 201
{
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2add08f4b328){
#line 43
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x2add08f4b328);
#line 43
}
#line 43
# 87 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 87
{
  /* atomic removed: atomic calls only */
#line 88
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      EBUSY;

#line 93
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 130 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 110 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 110
{
}

# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP__McuPowerState__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 69 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void )
#line 69
{
  * (volatile uint8_t *)(0x06 + 0x20) |= 1 << 7;
  HplAtm128AdcP__McuPowerState__update();
}

# 73 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__enableAdc(void ){
#line 73
  HplAtm128AdcP__HplAtm128Adc__enableAdc();
#line 73
}
#line 73
# 104 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__start(void )
#line 104
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    Atm128AdcP__HplAtm128Adc__enableAdc();
#line 105
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__AsyncStdControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = Atm128AdcP__AsyncStdControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 59 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__ResourceDefaultOwner__requested(void )
#line 59
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = MicP__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 84 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__default__start(void )
#line 84
{
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__default__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 63 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__startTask__runTask(void )
#line 63
{
  /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__start();
  /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__start();
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )52U |= 1 << 3;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MicP__MicPower__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput();
#line 35
}
#line 35
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )53U |= 1 << 3;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MicP__MicPower__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )52U |= 1 << 6;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MicP__MicMuxSel__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__makeOutput();
#line 35
}
#line 35
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )53U |= 1 << 6;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MicP__MicMuxSel__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__set();
#line 29
}
#line 29
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )53U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MicP__MicMuxSel__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP__22__IO__clr();
#line 30
}
#line 30
# 93 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline error_t MicP__MicSetting__muxSel(uint8_t sel)
{
  if (sel == 0) 
    {
      MicP__MicMuxSel__clr();
      return SUCCESS;
    }
  else {
#line 100
    if (sel == 1) 
      {
        MicP__MicMuxSel__set();
        return SUCCESS;
      }
    }
#line 105
  return FAIL;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 130 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceDefaultOwner__release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__resId == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__default_owner_id) {
          if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__RES_GRANTING) {
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__RES_IMM_GRANTING) {
                /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__reqResId;
                /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 79 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__sendCommand(void )
#line 79
{
  /* atomic removed: atomic calls only */
#line 80
  * (volatile uint8_t *)0x74 = HplAtm128I2CBusP__current;
}

# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand(void ){
#line 48
  HplAtm128I2CBusP__I2C__sendCommand();
#line 48
}
#line 48
# 134 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__enableInterrupt(bool enable)
#line 134
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 136
      HplAtm128I2CBusP__current |= 1 << 0;
    }
  else {
      /* atomic removed: atomic calls only */
#line 139
      HplAtm128I2CBusP__current &= ~(1 << 0);
    }
}

# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(bool enable){
#line 60
  HplAtm128I2CBusP__I2C__enableInterrupt(enable);
#line 60
}
#line 60
# 164 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__enable(bool enable)
#line 164
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 166
      HplAtm128I2CBusP__current |= 1 << 2;
    }
  else {
      /* atomic removed: atomic calls only */
#line 169
      HplAtm128I2CBusP__current &= ~(1 << 2);
    }
}

# 76 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(bool on){
#line 76
  HplAtm128I2CBusP__I2C__enable(on);
#line 76
}
#line 76
#line 47
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent(void ){
#line 47
  HplAtm128I2CBusP__I2C__readCurrent();
#line 47
}
#line 47
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 1);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CData__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__makeInput();
#line 33
}
#line 33
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 0);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CClk__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__makeInput();
#line 33
}
#line 33
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )50U |= 1 << 1;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CData__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )50U |= 1 << 0;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CClk__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__set();
#line 29
}
#line 29
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__init(bool hasExternalPulldown)
#line 53
{

  if (hasExternalPulldown) {


      HplAtm128I2CBusP__I2CClk__set();
      HplAtm128I2CBusP__I2CData__set();
    }
  HplAtm128I2CBusP__I2CClk__makeInput();
  HplAtm128I2CBusP__I2CData__makeInput();
  * (volatile uint8_t *)0x71 = 0;
  * (volatile uint8_t *)0x70 = (7372800 / 50000UL - 16) / 2;

  * (volatile uint8_t *)0x72 = 0;
  * (volatile uint8_t *)0x74 = 0;
}

# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__init(bool hasExternalPulldown){
#line 42
  HplAtm128I2CBusP__I2C__init(hasExternalPulldown);
#line 42
}
#line 42
# 125 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__start(void )
#line 125
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 126
    {
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_OFF) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__init(FALSE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(TRUE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE;
          {
            unsigned char __nesc_temp = 
#line 134
            SUCCESS;

            {
#line 134
              __nesc_atomic_end(__nesc_atomic); 
#line 134
              return __nesc_temp;
            }
          }
        }
      else 
#line 136
        {
          {
            unsigned char __nesc_temp = 
#line 137
            FAIL;

            {
#line 137
              __nesc_atomic_end(__nesc_atomic); 
#line 137
              return __nesc_temp;
            }
          }
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 59 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 59
{
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 54 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 54
{
  /* atomic removed: atomic calls only */
#line 55
  {
    unsigned char __nesc_temp = 
#line 55
    /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[id] != /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY || /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qTail == id;

#line 55
    return __nesc_temp;
  }
}

#line 72
static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = id;
          }
        else {
#line 78
          /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qTail] = id;
          }
#line 79
        /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 201 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceRequested__default__requested(uint8_t id)
#line 201
{
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceRequested__requested(uint8_t arg_0x2add08f4b328){
#line 43
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceRequested__default__requested(arg_0x2add08f4b328);
#line 43
}
#line 43
# 77 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Resource__request(uint8_t id)
#line 77
{
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceRequested__requested(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__RES_CONTROLLED) {
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__RES_GRANTING;
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Queue__enqueue(id);

          {
#line 84
            __nesc_atomic_end(__nesc_atomic); 
#line 84
            return __nesc_temp;
          }
        }
    }
#line 87
    __nesc_atomic_end(__nesc_atomic); }
#line 86
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__request(uint8_t arg_0x2add09209460){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Resource__request(arg_0x2add09209460);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__request(uint8_t id)
#line 55
{
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__request(id);
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t MicP__I2CResource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__request(/*MicDeviceP.I2CPot*/Atm128I2CMasterC__0__CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 108 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline error_t MicP__MicSetting__gainAdjust(uint8_t val)
{
  MicP__gainData[0] = 0;
  MicP__gainData[1] = val;
  return MicP__I2CResource__request();
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void MicP__Timer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(5U, dt);
#line 62
}
#line 62
# 102 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__stopDone(error_t error)
#line 102
{
  if (/*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__requested == TRUE) {
      /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__start();
      /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__requested = FALSE;
      /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopping = FALSE;
    }
#line 110
    __nesc_atomic_end(__nesc_atomic); }
}

# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void MicP__SplitControl__stopDone(error_t error){
#line 117
  /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__stopDone(error);
#line 117
}
#line 117
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )52U &= ~(1 << 3);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MicP__MicPower__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeInput();
#line 33
}
#line 33
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )53U &= ~(1 << 3);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MicP__MicPower__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP__19__IO__clr();
#line 30
}
#line 30
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__disable(void )
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 7);
}

# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void MicP__AlertInterrupt__disable(void ){
#line 40
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__disable();
#line 40
}
#line 40
# 70 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline error_t MicP__SplitControl__stop(void )
{
  MicP__AlertInterrupt__disable();
  MicP__MicPower__clr();
  MicP__MicPower__makeInput();

  MicP__SplitControl__stopDone(SUCCESS);
  return SUCCESS;
}

# 109 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__stop(void ){
#line 109
  unsigned char __nesc_result;
#line 109

#line 109
  __nesc_result = MicP__SplitControl__stop();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 113 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__default__stop(void )
#line 113
{
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__default__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 121 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__PowerDownCleanup__default__cleanup(void )
#line 121
{
}

# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
inline static void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__PowerDownCleanup__cleanup(void ){
#line 52
  /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__PowerDownCleanup__default__cleanup();
#line 52
}
#line 52
# 68 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopTask__runTask(void )
#line 68
{
  /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__PowerDownCleanup__cleanup();
  /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__StdControl__stop();
  /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__stop();
}

# 49 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline error_t /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__default__read(uint8_t client)
#line 49
{
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__read(uint8_t arg_0x2add08ff9390){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  switch (arg_0x2add08ff9390) {
#line 55
    case /*SendingAppC.SensorMts300C.MicC*/MicC__0__ID:
#line 55
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4__ID);
#line 55
      break;
#line 55
    default:
#line 55
      __nesc_result = /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__default__read(arg_0x2add08ff9390);
#line 55
      break;
#line 55
    }
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Resource__granted(uint8_t client)
#line 35
{
  /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__read(client);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Resource__granted(uint8_t arg_0x2add08f4c1a0){
#line 92
  /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Resource__granted(arg_0x2add08f4c1a0);
#line 92
}
#line 92
# 213 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__configure(uint8_t arg_0x2add08f48538){
#line 49
    /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__default__configure(arg_0x2add08f48538);
#line 49
}
#line 49
# 187 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__grantedTask__runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__resId = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__reqResId;
      /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__state = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__configure(/*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__resId);
  /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Resource__granted(/*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__resId);
}

# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static error_t MicP__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__write(/*MicDeviceP.I2CPot*/Atm128I2CMasterC__0__CLIENT_ID, flags, addr, length, data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 84 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline void MicP__I2CResource__granted(void )
{
  MicP__I2CPacket__write(0x3, TOS_MIC_POT_ADDR, 2, MicP__gainData);
}

# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static error_t MagP__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__write(/*MagConfigP.I2CPot*/Atm128I2CMasterC__1__CLIENT_ID, flags, addr, length, data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 62 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static inline void MagP__I2CResource__granted(void )
{
  if (MagP__I2CPacket__write(0x3, TOS_MAG_POT_ADDR, 2, MagP__gainData) == SUCCESS) 
    {
      return;
    }
}

# 106 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__default__granted(uint8_t id)
#line 106
{
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__granted(uint8_t arg_0x2add091b5108){
#line 92
  switch (arg_0x2add091b5108) {
#line 92
    case /*MicDeviceP.I2CPot*/Atm128I2CMasterC__0__CLIENT_ID:
#line 92
      MicP__I2CResource__granted();
#line 92
      break;
#line 92
    case /*MagConfigP.I2CPot*/Atm128I2CMasterC__1__CLIENT_ID:
#line 92
      MagP__I2CResource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__default__granted(arg_0x2add091b5108);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 67 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__granted(uint8_t id)
#line 67
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 68
    /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__currentClient = id;
#line 68
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__granted(id);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Resource__granted(uint8_t arg_0x2add08f4c1a0){
#line 92
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__granted(arg_0x2add08f4c1a0);
#line 92
}
#line 92
# 213 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__configure(uint8_t arg_0x2add08f48538){
#line 49
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__default__configure(arg_0x2add08f48538);
#line 49
}
#line 49
# 187 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__grantedTask__runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__reqResId;
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__configure(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__resId);
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Resource__granted(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__resId);
}

# 100 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__setStop(bool on)
#line 100
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 102
      HplAtm128I2CBusP__current |= 1 << 4;
    }
  else {
      /* atomic removed: atomic calls only */
#line 105
      HplAtm128I2CBusP__current &= ~(1 << 4);
    }
}

# 55 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(bool on){
#line 55
  HplAtm128I2CBusP__I2C__setStop(on);
#line 55
}
#line 55
# 121 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__enableAck(bool enable)
#line 121
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 123
      HplAtm128I2CBusP__current |= 1 << 6;
    }
  else {
      /* atomic removed: atomic calls only */
#line 126
      HplAtm128I2CBusP__current &= ~(1 << 6);
    }
}

# 57 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(bool enable){
#line 57
  HplAtm128I2CBusP__I2C__enableAck(enable);
#line 57
}
#line 57
# 113 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__write(uint8_t data)
#line 113
{
  * (volatile uint8_t *)0x73 = data;
}

# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(uint8_t data){
#line 81
  HplAtm128I2CBusP__I2C__write(data);
#line 81
}
#line 81
# 88 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__setStart(bool on)
#line 88
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 90
      HplAtm128I2CBusP__current |= 1 << 5;
    }
  else {
      /* atomic removed: atomic calls only */
#line 93
      HplAtm128I2CBusP__current &= ~(1 << 5);
    }
}

# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStart(bool on){
#line 53
  HplAtm128I2CBusP__I2C__setStart(on);
#line 53
}
#line 53
# 155 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__setInterruptPending(bool on)
#line 155
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 157
      HplAtm128I2CBusP__current |= 1 << 7;
    }
  else {
      /* atomic removed: atomic calls only */
#line 160
      HplAtm128I2CBusP__current &= ~(1 << 7);
    }
}

# 74 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(bool on){
#line 74
  HplAtm128I2CBusP__I2C__setInterruptPending(on);
#line 74
}
#line 74
# 211 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 211
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 212
    {
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_BUSY;
        }
      else {
#line 216
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_OFF) {
            {
              unsigned char __nesc_temp = 
#line 217
              EOFF;

              {
#line 217
                __nesc_atomic_end(__nesc_atomic); 
#line 217
                return __nesc_temp;
              }
            }
          }
        else 
#line 219
          {
            {
              unsigned char __nesc_temp = 
#line 220
              EBUSY;

              {
#line 220
                __nesc_atomic_end(__nesc_atomic); 
#line 220
                return __nesc_temp;
              }
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 225
    {
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr = addr;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr = data;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen = len;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags = flags;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index = 0;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading = FALSE;
    }
#line 232
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 234
    {
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(TRUE);

      if (flags & I2C_START) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStart(TRUE);

          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_STARTING;
        }
      else {
#line 244
        if (len > 0) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_DATA;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(data[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index]);
          }
        else {
#line 248
          if (flags & I2C_STOP) {
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_STOPPING;
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(FALSE);
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(TRUE);
            }
          else {
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE;
              {
                unsigned char __nesc_temp = 
#line 255
                FAIL;

                {
#line 255
                  __nesc_atomic_end(__nesc_atomic); 
#line 255
                  return __nesc_temp;
                }
              }
            }
          }
        }
#line 257
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
    }
#line 258
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__write(flags, addr, length, data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__request(1U);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 16 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__start(void )
#line 16
{
  /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__request();
  return SUCCESS;
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 84 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__default__start(void )
#line 84
{
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__default__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 102 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__stopDone(error_t error)
#line 102
{
  if (/*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__requested == TRUE) {
      /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__start();
      /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__requested = FALSE;
      /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopping = FALSE;
    }
#line 110
    __nesc_atomic_end(__nesc_atomic); }
}

# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__stopDone(error_t error){
#line 117
  /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__stopDone(error);
#line 117
}
#line 117
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__release(1U);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 32 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__stopDone__runTask(void )
#line 32
{
  /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__release();
  /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__stopDone(SUCCESS);
}

# 56 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__resQ; i++) 
      if (/*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static bool /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 47 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__clearEntry(uint8_t id)
#line 47
{
  /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__resQ[id / 8] &= ~(1 << id % 8);
}

#line 69
static inline resource_client_id_t /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__last + 1; ; i++) {
        if (i == 2U) {
          i = 0;
          }
#line 75
        if (/*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEnqueued(i)) {
            /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__clearEntry(i);
            /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 215 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(uint8_t id)
#line 215
{
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(uint8_t arg_0x2add08f48538){
#line 55
    /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(arg_0x2add08f48538);
#line 55
}
#line 55
# 205 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__default__granted(void )
#line 205
{
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__granted(void ){
#line 46
  /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 201 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceRequested__default__requested(uint8_t id)
#line 201
{
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
inline static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceRequested__requested(uint8_t arg_0x2add08f4b328){
#line 43
    /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceRequested__default__requested(arg_0x2add08f4b328);
#line 43
}
#line 43
# 87 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 87
{
  /* atomic removed: atomic calls only */
#line 88
  {
    if (!/*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEnqueued(id)) {
        /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      EBUSY;

#line 93
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 130 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__resId == /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__default_owner_id) {
          if (/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__state == /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__RES_GRANTING) {
              /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__state == /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__RES_IMM_GRANTING) {
                /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__resId = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__reqResId;
                /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__state = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

#line 207
static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__default__requested(void )
#line 207
{
  /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__requested(void ){
#line 73
  /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__request(0U);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 16 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__start(void )
#line 16
{
  /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__request();
  return SUCCESS;
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 84 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__default__start(void )
#line 84
{
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__default__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 102 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__stopDone(error_t error)
#line 102
{
  if (/*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__requested == TRUE) {
      /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__start();
      /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__requested = FALSE;
      /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopping = FALSE;
    }
#line 110
    __nesc_atomic_end(__nesc_atomic); }
}

# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__stopDone(error_t error){
#line 117
  /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__stopDone(error);
#line 117
}
#line 117
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__release(0U);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 32 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__stopDone__runTask(void )
#line 32
{
  /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__release();
  /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__stopDone(SUCCESS);
}

# 63 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__startTask__runTask(void )
#line 63
{
  /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__start();
  /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__start();
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__stopDone__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__stopDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )34U &= ~(1 << 6);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__makeInput();
#line 33
}
#line 33
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )35U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__clr();
#line 30
}
#line 30
# 37 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__stop(void )
#line 37
{
  /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__clr();
  /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__makeInput();
  /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__stopDone__postTask();
  return SUCCESS;
}

# 109 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__stop(void ){
#line 109
  unsigned char __nesc_result;
#line 109

#line 109
  __nesc_result = /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__stop();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 113 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__default__stop(void )
#line 113
{
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__default__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 121 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__PowerDownCleanup__default__cleanup(void )
#line 121
{
}

# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
inline static void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__PowerDownCleanup__cleanup(void ){
#line 52
  /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__PowerDownCleanup__default__cleanup();
#line 52
}
#line 52
# 68 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopTask__runTask(void )
#line 68
{
  /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__PowerDownCleanup__cleanup();
  /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__StdControl__stop();
  /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__stop();
}

#line 63
static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__startTask__runTask(void )
#line 63
{
  /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__start();
  /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__start();
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__stopDone__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__stopDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )34U &= ~(1 << 5);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeInput();
#line 33
}
#line 33
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )35U &= ~(1 << 5);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__clr();
#line 30
}
#line 30
# 37 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__stop(void )
#line 37
{
  /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__clr();
  /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__makeInput();
  /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__stopDone__postTask();
  return SUCCESS;
}

# 109 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__stop(void ){
#line 109
  unsigned char __nesc_result;
#line 109

#line 109
  __nesc_result = /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__stop();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 113 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__default__stop(void )
#line 113
{
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__default__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 121 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__PowerDownCleanup__default__cleanup(void )
#line 121
{
}

# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
inline static void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__PowerDownCleanup__cleanup(void ){
#line 52
  /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__PowerDownCleanup__default__cleanup();
#line 52
}
#line 52
# 68 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopTask__runTask(void )
#line 68
{
  /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__PowerDownCleanup__cleanup();
  /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__StdControl__stop();
  /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__stop();
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__ActualRead__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*PhotoTempDeviceC.Adc*/AdcReadClientC__0__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 46 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline error_t /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Read__read(uint8_t client)
#line 46
{
  /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__id = client;
  return /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__ActualRead__read();
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Service__read(uint8_t arg_0x2add08ff9390){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Read__read(arg_0x2add08ff9390);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Resource__granted(uint8_t client)
#line 35
{
  /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Service__read(client);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Resource__granted(uint8_t arg_0x2add08f4c1a0){
#line 92
  /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Resource__granted(arg_0x2add08f4c1a0);
#line 92
}
#line 92
# 213 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__configure(uint8_t arg_0x2add08f48538){
#line 49
    /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__default__configure(arg_0x2add08f48538);
#line 49
}
#line 49
# 187 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__grantedTask__runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__resId = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__reqResId;
      /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__state = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__configure(/*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__resId);
  /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Resource__granted(/*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__resId);
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__ActualRead__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*PhotoTempDeviceC.Adc*/AdcReadClientC__0__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 46 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline error_t /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Read__read(uint8_t client)
#line 46
{
  /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__id = client;
  return /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__ActualRead__read();
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Service__read(uint8_t arg_0x2add08ff9390){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Read__read(arg_0x2add08ff9390);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Resource__granted(uint8_t client)
#line 35
{
  /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Service__read(client);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Resource__granted(uint8_t arg_0x2add08f4c1a0){
#line 92
  /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Resource__granted(arg_0x2add08f4c1a0);
#line 92
}
#line 92
# 213 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__configure(uint8_t arg_0x2add08f48538){
#line 49
    /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__default__configure(arg_0x2add08f48538);
#line 49
}
#line 49
# 187 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__grantedTask__runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__resId = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__reqResId;
      /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__state = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__configure(/*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__resId);
  /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Resource__granted(/*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__resId);
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Timer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 62
}
#line 62
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )35U |= 1 << 6;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )34U |= 1 << 6;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__makeOutput();
#line 35
}
#line 35
# 21 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__granted(void )
#line 21
{
  /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__makeOutput();
  /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Power__set();
  /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Timer__startOneShot(10);
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Timer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 62
}
#line 62
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )35U |= 1 << 5;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )34U |= 1 << 5;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__37__IO__makeOutput();
#line 35
}
#line 35
# 21 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__granted(void )
#line 21
{
  /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__makeOutput();
  /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Power__set();
  /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Timer__startOneShot(10);
}

# 199 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__default__granted(uint8_t id)
#line 199
{
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__granted(uint8_t arg_0x2add08f4c1a0){
#line 92
  switch (arg_0x2add08f4c1a0) {
#line 92
    case 0U:
#line 92
      /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__granted();
#line 92
      break;
#line 92
    case 1U:
#line 92
      /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__default__granted(arg_0x2add08f4c1a0);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 213 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__configure(uint8_t arg_0x2add08f48538){
#line 49
    /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(arg_0x2add08f48538);
#line 49
}
#line 49
# 187 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__grantedTask__runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__resId = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__reqResId;
      /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__state = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__configure(/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__resId);
  /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__granted(/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__resId);
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = AccelP__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 84 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start(void )
#line 84
{
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 63 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask(void )
#line 63
{
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start();
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start();
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )52U |= 1 << 4;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void AccelP__AccelPin__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput();
#line 35
}
#line 35
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )53U |= 1 << 4;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void AccelP__AccelPin__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__set();
#line 29
}
#line 29
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void AccelP__Timer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 62
}
#line 62
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t AccelP__stopDone__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AccelP__stopDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 72 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/AccelP.nc"
static inline error_t AccelP__SplitControl__stop(void )
#line 72
{
  AccelP__stopDone__postTask();
  return SUCCESS;
}

# 109 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stop(void ){
#line 109
  unsigned char __nesc_result;
#line 109

#line 109
  __nesc_result = AccelP__SplitControl__stop();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 113 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop(void )
#line 113
{
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__default__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 121 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 121
{
}

# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
inline static void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 52
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 52
}
#line 52
# 68 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask(void )
#line 68
{
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__PowerDownCleanup__cleanup();
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__stop();
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stop();
}

# 49 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__default__read(uint8_t client)
#line 49
{
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__read(uint8_t arg_0x2add08ff9390){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  switch (arg_0x2add08ff9390) {
#line 55
    case /*SendingAppC.SensorMts300C.AccelYC*/AccelYC__0__ID:
#line 55
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3__ID);
#line 55
      break;
#line 55
    default:
#line 55
      __nesc_result = /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__default__read(arg_0x2add08ff9390);
#line 55
      break;
#line 55
    }
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Resource__granted(uint8_t client)
#line 35
{
  /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__read(client);
}











static inline error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__default__read(uint8_t client)
#line 49
{
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__read(uint8_t arg_0x2add08ff9390){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  switch (arg_0x2add08ff9390) {
#line 55
    case /*SendingAppC.SensorMts300C.AccelXC*/AccelXC__0__ID:
#line 55
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2__ID);
#line 55
      break;
#line 55
    default:
#line 55
      __nesc_result = /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__default__read(arg_0x2add08ff9390);
#line 55
      break;
#line 55
    }
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Resource__granted(uint8_t client)
#line 35
{
  /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__read(client);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0x2add08f4c1a0){
#line 92
  /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Resource__granted(arg_0x2add08f4c1a0);
#line 92
  /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Resource__granted(arg_0x2add08f4c1a0);
#line 92
}
#line 92
# 213 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x2add08f48538){
#line 49
    /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0x2add08f48538);
#line 49
}
#line 49
# 187 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__resId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__reqResId;
      /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__resId);
  /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__granted(/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__resId);
}

# 102 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error_t error)
#line 102
{
  if (/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__requested == TRUE) {
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__StdControl__start();
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__requested = FALSE;
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopping = FALSE;
    }
#line 110
    __nesc_atomic_end(__nesc_atomic); }
}

# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void AccelP__SplitControl__stopDone(error_t error){
#line 117
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__stopDone(error);
#line 117
}
#line 117
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )53U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void AccelP__AccelPin__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr();
#line 30
}
#line 30
# 67 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/AccelP.nc"
static inline void AccelP__stopDone__runTask(void )
#line 67
{
  AccelP__AccelPin__clr();
  AccelP__SplitControl__stopDone(SUCCESS);
}

# 269 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 72 "SendingC.nc"
static inline void SendingC__AccelX__readDone(error_t error, uint16_t data)
#line 72
{
  __nesc_hton_uint16(SendingC__btrpkt->AX.data, data);
}

# 48 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__default__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__1__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__readDone(uint8_t arg_0x2add08ffc6b8, error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__val_t val){
#line 63
  switch (arg_0x2add08ffc6b8) {
#line 63
    case /*SendingAppC.SensorMts300C.AccelXC*/AccelXC__0__ID:
#line 63
      SendingC__AccelX__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__default__readDone(arg_0x2add08ffc6b8, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Resource__release(uint8_t arg_0x2add08ff8e30){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__release(arg_0x2add08ff8e30);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 39 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexX*/ArbitratedReadC__1__width_t data)
#line 39
{
  /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Resource__release(client);
  /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__readDone(client, result, data);
}

# 76 "SendingC.nc"
static inline void SendingC__AccelY__readDone(error_t error, uint16_t data)
#line 76
{
  __nesc_hton_uint16(SendingC__btrpkt->AY.data, data);
}

# 48 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__default__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexY*/ArbitratedReadC__2__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__readDone(uint8_t arg_0x2add08ffc6b8, error_t result, /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__val_t val){
#line 63
  switch (arg_0x2add08ffc6b8) {
#line 63
    case /*SendingAppC.SensorMts300C.AccelYC*/AccelYC__0__ID:
#line 63
      SendingC__AccelY__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__default__readDone(arg_0x2add08ffc6b8, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Resource__release(uint8_t arg_0x2add08ff8e30){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__release(arg_0x2add08ff8e30);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 39 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__readDone(uint8_t client, error_t result, /*AccelReadP.MultiplexY*/ArbitratedReadC__2__width_t data)
#line 39
{
  /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Resource__release(client);
  /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__readDone(client, result, data);
}





static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Read__default__readDone(uint8_t client, error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Read__readDone(uint8_t arg_0x2add08ffc6b8, error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Read__val_t val){
#line 63
    /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Read__default__readDone(arg_0x2add08ffc6b8, result, val);
#line 63
}
#line 63
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 97 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__ResourceDefaultOwner__granted(void )
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopping = TRUE;
  /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopTask__postTask();
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceDefaultOwner__granted(void ){
#line 46
  /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 215 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__default__unconfigure(uint8_t id)
#line 215
{
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__unconfigure(uint8_t arg_0x2add08f48538){
#line 55
    /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__default__unconfigure(arg_0x2add08f48538);
#line 55
}
#line 55
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__clearEntry(uint8_t id)
#line 47
{
  /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__resQ[id / 8] &= ~(1 << id % 8);
}

#line 65
static inline bool /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 65
{
  return /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__resQ[id / 8] & (1 << id % 8);
}

static inline resource_client_id_t /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 75
        if (/*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__isEnqueued(i)) {
            /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__clearEntry(i);
            /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 56 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__resQ; i++) 
      if (/*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static bool /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__RoundRobinQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Resource__release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__state == /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__RES_BUSY && /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__resId == id) {
          if (/*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Queue__isEmpty() == FALSE) {
              /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__reqResId = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Queue__dequeue();
              /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__resId = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__NO_RES;
              /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__state = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__RES_GRANTING;
              /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__grantedTask__postTask();
              /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__unconfigure(id);
            }
          else {
              /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__resId = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__default_owner_id;
              /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__state = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__RES_CONTROLLED;
              /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceConfigure__unconfigure(id);
              /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 124
            SUCCESS;

            {
#line 124
              __nesc_atomic_end(__nesc_atomic); 
#line 124
              return __nesc_temp;
            }
          }
        }
    }
#line 128
    __nesc_atomic_end(__nesc_atomic); }
#line 127
  return FAIL;
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Resource__release(uint8_t arg_0x2add08ff8e30){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__Resource__release(arg_0x2add08ff8e30);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 39 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Service__readDone(uint8_t client, error_t result, /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__width_t data)
#line 39
{
  /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Resource__release(client);
  /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Read__readDone(client, result, data);
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Read__readDone(uint8_t arg_0x2add090fc5c0, error_t result, /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Read__val_t val){
#line 63
  /*ArbitratedTempDeviceP.ArbitrateRead*/ArbitratedReadC__4__Service__readDone(arg_0x2add090fc5c0, result, val);
#line 63
}
#line 63
# 118 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static bool /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__isOwner(1U);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 51 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__ActualRead__readDone(error_t result, uint16_t val)
#line 51
{
  if (/*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__isOwner()) {
    /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Read__readDone(/*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__id, result, val);
    }
}

# 48 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Read__default__readDone(uint8_t client, error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Read__readDone(uint8_t arg_0x2add08ffc6b8, error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Read__val_t val){
#line 63
    /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Read__default__readDone(arg_0x2add08ffc6b8, result, val);
#line 63
}
#line 63
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 97 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__granted(void )
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopping = TRUE;
  /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopTask__postTask();
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceDefaultOwner__granted(void ){
#line 46
  /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 215 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__default__unconfigure(uint8_t id)
#line 215
{
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__unconfigure(uint8_t arg_0x2add08f48538){
#line 55
    /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__default__unconfigure(arg_0x2add08f48538);
#line 55
}
#line 55
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__clearEntry(uint8_t id)
#line 47
{
  /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__resQ[id / 8] &= ~(1 << id % 8);
}

#line 65
static inline bool /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 65
{
  return /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__resQ[id / 8] & (1 << id % 8);
}

static inline resource_client_id_t /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 75
        if (/*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__isEnqueued(i)) {
            /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__clearEntry(i);
            /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 56 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__resQ; i++) 
      if (/*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static bool /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__RoundRobinQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Resource__release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__state == /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__RES_BUSY && /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__resId == id) {
          if (/*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Queue__isEmpty() == FALSE) {
              /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__reqResId = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Queue__dequeue();
              /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__resId = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__NO_RES;
              /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__state = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__RES_GRANTING;
              /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__grantedTask__postTask();
              /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__unconfigure(id);
            }
          else {
              /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__resId = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__default_owner_id;
              /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__state = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__RES_CONTROLLED;
              /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceConfigure__unconfigure(id);
              /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 124
            SUCCESS;

            {
#line 124
              __nesc_atomic_end(__nesc_atomic); 
#line 124
              return __nesc_temp;
            }
          }
        }
    }
#line 128
    __nesc_atomic_end(__nesc_atomic); }
#line 127
  return FAIL;
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Resource__release(uint8_t arg_0x2add08ff8e30){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__Resource__release(arg_0x2add08ff8e30);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 39 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Service__readDone(uint8_t client, error_t result, /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__width_t data)
#line 39
{
  /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Resource__release(client);
  /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Read__readDone(client, result, data);
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Read__readDone(uint8_t arg_0x2add090fc5c0, error_t result, /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Read__val_t val){
#line 63
  /*ArbitratedPhotoDeviceP.ArbitrateRead*/ArbitratedReadC__3__Service__readDone(arg_0x2add090fc5c0, result, val);
#line 63
}
#line 63
# 118 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static bool /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__isOwner(0U);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 51 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__ActualRead__readDone(error_t result, uint16_t val)
#line 51
{
  if (/*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__isOwner()) {
    /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Read__readDone(/*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__id, result, val);
    }
}

# 48 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Read__default__readDone(uint8_t client, error_t result, /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Read__readDone(uint8_t arg_0x2add08ffc6b8, error_t result, /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Read__val_t val){
#line 63
    /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Read__default__readDone(arg_0x2add08ffc6b8, result, val);
#line 63
}
#line 63
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 97 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__ResourceDefaultOwner__granted(void )
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopping = TRUE;
  /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopTask__postTask();
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceDefaultOwner__granted(void ){
#line 46
  /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 215 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__default__unconfigure(uint8_t id)
#line 215
{
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__unconfigure(uint8_t arg_0x2add08f48538){
#line 55
    /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__default__unconfigure(arg_0x2add08f48538);
#line 55
}
#line 55
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__clearEntry(uint8_t id)
#line 47
{
  /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__resQ[id / 8] &= ~(1 << id % 8);
}

#line 65
static inline bool /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 65
{
  return /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__resQ[id / 8] & (1 << id % 8);
}

static inline resource_client_id_t /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 75
        if (/*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__isEnqueued(i)) {
            /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__clearEntry(i);
            /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 56 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__resQ; i++) 
      if (/*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static bool /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__RoundRobinQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Resource__release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__state == /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__RES_BUSY && /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__resId == id) {
          if (/*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Queue__isEmpty() == FALSE) {
              /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__reqResId = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Queue__dequeue();
              /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__resId = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__NO_RES;
              /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__state = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__RES_GRANTING;
              /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__grantedTask__postTask();
              /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__unconfigure(id);
            }
          else {
              /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__resId = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__default_owner_id;
              /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__state = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__RES_CONTROLLED;
              /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceConfigure__unconfigure(id);
              /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 124
            SUCCESS;

            {
#line 124
              __nesc_atomic_end(__nesc_atomic); 
#line 124
              return __nesc_temp;
            }
          }
        }
    }
#line 128
    __nesc_atomic_end(__nesc_atomic); }
#line 127
  return FAIL;
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Resource__release(uint8_t arg_0x2add08ff8e30){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__Resource__release(arg_0x2add08ff8e30);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 39 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__readDone(uint8_t client, error_t result, /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__width_t data)
#line 39
{
  /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Resource__release(client);
  /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Read__readDone(client, result, data);
}





static inline void /*MagReadP.AdcX*/ArbitratedReadC__6__Read__default__readDone(uint8_t client, error_t result, /*MagReadP.AdcX*/ArbitratedReadC__6__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void /*MagReadP.AdcX*/ArbitratedReadC__6__Read__readDone(uint8_t arg_0x2add08ffc6b8, error_t result, /*MagReadP.AdcX*/ArbitratedReadC__6__Read__val_t val){
#line 63
    /*MagReadP.AdcX*/ArbitratedReadC__6__Read__default__readDone(arg_0x2add08ffc6b8, result, val);
#line 63
}
#line 63
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*MagReadP.AdcX*/ArbitratedReadC__6__Resource__release(uint8_t arg_0x2add08ff8e30){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Resource__release(arg_0x2add08ff8e30);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 39 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*MagReadP.AdcX*/ArbitratedReadC__6__Service__readDone(uint8_t client, error_t result, /*MagReadP.AdcX*/ArbitratedReadC__6__width_t data)
#line 39
{
  /*MagReadP.AdcX*/ArbitratedReadC__6__Resource__release(client);
  /*MagReadP.AdcX*/ArbitratedReadC__6__Read__readDone(client, result, data);
}





static inline void /*MagReadP.AdcY*/ArbitratedReadC__7__Read__default__readDone(uint8_t client, error_t result, /*MagReadP.AdcY*/ArbitratedReadC__7__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void /*MagReadP.AdcY*/ArbitratedReadC__7__Read__readDone(uint8_t arg_0x2add08ffc6b8, error_t result, /*MagReadP.AdcY*/ArbitratedReadC__7__Read__val_t val){
#line 63
    /*MagReadP.AdcY*/ArbitratedReadC__7__Read__default__readDone(arg_0x2add08ffc6b8, result, val);
#line 63
}
#line 63
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*MagReadP.AdcY*/ArbitratedReadC__7__Resource__release(uint8_t arg_0x2add08ff8e30){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Resource__release(arg_0x2add08ff8e30);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 39 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*MagReadP.AdcY*/ArbitratedReadC__7__Service__readDone(uint8_t client, error_t result, /*MagReadP.AdcY*/ArbitratedReadC__7__width_t data)
#line 39
{
  /*MagReadP.AdcY*/ArbitratedReadC__7__Resource__release(client);
  /*MagReadP.AdcY*/ArbitratedReadC__7__Read__readDone(client, result, data);
}





static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(uint8_t arg_0x2add08ffc6b8, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val){
#line 63
  switch (arg_0x2add08ffc6b8) {
#line 63
    case /*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2__ID:
#line 63
      /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Service__readDone(/*SendingAppC.SensorMts300C.AccelXC*/AccelXC__0__ID, result, val);
#line 63
      break;
#line 63
    case /*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3__ID:
#line 63
      /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Service__readDone(/*SendingAppC.SensorMts300C.AccelYC*/AccelYC__0__ID, result, val);
#line 63
      break;
#line 63
    case /*PhotoTempDeviceC.Adc*/AdcReadClientC__0__ID:
#line 63
      /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__ActualRead__readDone(result, val);
#line 63
      /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__ActualRead__readDone(result, val);
#line 63
      break;
#line 63
    case /*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4__ID:
#line 63
      /*MicReadP.ArbitratedReadC*/ArbitratedReadC__5__Service__readDone(/*SendingAppC.SensorMts300C.MicC*/MicC__0__ID, result, val);
#line 63
      break;
#line 63
    case /*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5__ID:
#line 63
      /*MagReadP.AdcX*/ArbitratedReadC__6__Service__readDone(/*SendingAppC.SensorMts300C.MagXC*/MagXC__0__ID, result, val);
#line 63
      break;
#line 63
    case /*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6__ID:
#line 63
      /*MagReadP.AdcY*/ArbitratedReadC__7__Service__readDone(/*SendingAppC.SensorMts300C.MagYC*/MagYC__0__ID, result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(arg_0x2add08ffc6b8, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 47 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(uint8_t arg_0x2add08ff8e30){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  switch (arg_0x2add08ff8e30) {
#line 110
    case /*SendingAppC.SensorMts300C.VoltageC.AdcReadClientC*/AdcReadClientC__1__ID:
#line 110
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SendingAppC.SensorMts300C.VoltageC.AdcReadClientC*/AdcReadClientC__1__HAL_ID);
#line 110
      break;
#line 110
    case /*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2__ID:
#line 110
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2__HAL_ID);
#line 110
      break;
#line 110
    case /*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3__ID:
#line 110
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3__HAL_ID);
#line 110
      break;
#line 110
    case /*PhotoTempDeviceC.Adc*/AdcReadClientC__0__ID:
#line 110
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*PhotoTempDeviceC.Adc*/AdcReadClientC__0__HAL_ID);
#line 110
      break;
#line 110
    case /*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4__ID:
#line 110
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4__HAL_ID);
#line 110
      break;
#line 110
    case /*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5__ID:
#line 110
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5__HAL_ID);
#line 110
      break;
#line 110
    case /*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6__ID:
#line 110
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6__HAL_ID);
#line 110
      break;
#line 110
    default:
#line 110
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(arg_0x2add08ff8e30);
#line 110
      break;
#line 110
    }
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 39 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(client, result, data);
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x2add08fd2ac0, error_t result, AdcP__Read__val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(arg_0x2add08fd2ac0, result, val);
#line 63
}
#line 63
# 103 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__acquiredData__runTask(void )
#line 103
{
  AdcP__state = AdcP__IDLE;
  AdcP__Read__readDone(AdcP__client, SUCCESS, AdcP__val);
}

# 56 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 47 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 47
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 69
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 7U) {
          i = 0;
          }
#line 75
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 215 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 215
{
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2add08f48538){
#line 55
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2add08f48538);
#line 55
}
#line 55
# 73 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void )
#line 73
{
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 7);
  HplAtm128AdcP__McuPowerState__update();
}

# 77 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableAdc(void ){
#line 77
  HplAtm128AdcP__HplAtm128Adc__disableAdc();
#line 77
}
#line 77
# 109 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__stop(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  Atm128AdcP__HplAtm128Adc__disableAdc();

  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__AsyncStdControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = Atm128AdcP__AsyncStdControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 74 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__PowerDownCleanup__default__cleanup(void )
#line 74
{
}

# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__PowerDownCleanup__cleanup(void ){
#line 52
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__PowerDownCleanup__default__cleanup();
#line 52
}
#line 52
# 69 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__ResourceDefaultOwner__granted(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__PowerDownCleanup__cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__AsyncStdControl__stop();
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__1__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__resQ; i++) 
      if (/*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static bool /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 47 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__clearEntry(uint8_t id)
#line 47
{
  /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__resQ[id / 8] &= ~(1 << id % 8);
}

#line 65
static inline bool /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 65
{
  return /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__resQ[id / 8] & (1 << id % 8);
}

static inline resource_client_id_t /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__last + 1; ; i++) {
        if (i == 2U) {
          i = 0;
          }
#line 75
        if (/*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__isEnqueued(i)) {
            /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__clearEntry(i);
            /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__RoundRobinQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 215 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__default__unconfigure(uint8_t id)
#line 215
{
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__unconfigure(uint8_t arg_0x2add08f48538){
#line 55
    /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__default__unconfigure(arg_0x2add08f48538);
#line 55
}
#line 55
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 97 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__ResourceDefaultOwner__granted(void )
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopping = TRUE;
  /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopTask__postTask();
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceDefaultOwner__granted(void ){
#line 46
  /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__resQ; i++) 
      if (/*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static bool /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 47 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__clearEntry(uint8_t id)
#line 47
{
  /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__resQ[id / 8] &= ~(1 << id % 8);
}

#line 69
static inline resource_client_id_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__last + 1; ; i++) {
        if (i == 2U) {
          i = 0;
          }
#line 75
        if (/*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(i)) {
            /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__clearEntry(i);
            /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 215 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 215
{
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x2add08f48538){
#line 55
    /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x2add08f48538);
#line 55
}
#line 55
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 97 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopping = TRUE;
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__postTask();
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void ){
#line 46
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 86 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient)
#line 86
{

  AdcP__state = newState;
  AdcP__client = newClient;
  AdcP__sample();

  return SUCCESS;
}

static inline error_t AdcP__Read__read(uint8_t c)
#line 95
{
  return AdcP__startGet(AdcP__ACQUIRE_DATA, c);
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(uint8_t arg_0x2add08ff9390){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP__Read__read(arg_0x2add08ff9390);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(client);
}

# 199 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 199
{
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x2add08f4c1a0){
#line 92
  switch (arg_0x2add08f4c1a0) {
#line 92
    case /*SendingAppC.SensorMts300C.VoltageC.AdcReadClientC*/AdcReadClientC__1__HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SendingAppC.SensorMts300C.VoltageC.AdcReadClientC*/AdcReadClientC__1__ID);
#line 92
      break;
#line 92
    case /*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2__HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2__ID);
#line 92
      break;
#line 92
    case /*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3__HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3__ID);
#line 92
      break;
#line 92
    case /*PhotoTempDeviceC.Adc*/AdcReadClientC__0__HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*PhotoTempDeviceC.Adc*/AdcReadClientC__0__ID);
#line 92
      break;
#line 92
    case /*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4__HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4__ID);
#line 92
      break;
#line 92
    case /*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5__HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5__ID);
#line 92
      break;
#line 92
    case /*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6__HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6__ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x2add08f4c1a0);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 213 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2add08f48538){
#line 49
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x2add08f48538);
#line 49
}
#line 49
# 187 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
}

# 103 "/opt/tinyos-2.1.1/tos/platforms/mica/MeasureClockC.nc"
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void )
#line 103
{

  if (MeasureClockC__cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 107
  if (MeasureClockC__cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 109
  if (MeasureClockC__cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 111
  if (MeasureClockC__cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 113
  if (MeasureClockC__cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 115
  if (MeasureClockC__cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 117
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = MeasureClockC__Atm128Calibrate__adcPrescaler();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x)
#line 50
{
#line 50
  union __nesc_unnamed4444 {
#line 50
    Atm128Admux_t f;
#line 50
    uint8_t t;
  } 
#line 50
  c = { .f = x };

#line 50
  return c.t;
}


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x)
#line 54
{
  * (volatile uint8_t *)(0x07 + 0x20) = HplAtm128AdcP__Admux2int(x);
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux){
#line 49
  HplAtm128AdcP__HplAtm128Adc__setAdmux(admux);
#line 49
}
#line 49
# 119 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 119
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void )
#line 40
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)(0x07 + 0x20);
}

# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void ){
#line 44
  struct __nesc_unnamed4251 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__getAdmux();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 184 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 184
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsr;

  admux = Atm128AdcP__HplAtm128Adc__getAdmux();
  Atm128AdcP__f.precise = Atm128AdcP__isPrecise(admux, channel, refVoltage);
  Atm128AdcP__f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;
  admux.mux = channel;
  Atm128AdcP__HplAtm128Adc__setAdmux(admux);

  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adfr = Atm128AdcP__f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP__Atm128Calibrate__adcPrescaler();
    }
#line 204
  adcsr.adps = prescaler;
  Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
}

static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 209
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP__f.multiple = FALSE;
      Atm128AdcP__getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 215
        Atm128AdcP__f.precise;

        {
#line 215
          __nesc_atomic_end(__nesc_atomic); 
#line 215
          return __nesc_temp;
        }
      }
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = Atm128AdcP__Atm128AdcSingle__getData(channel, refVoltage, leftJustify, prescaler);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 34 "/opt/tinyos-2.1.1/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP__Atm128AdcConfig__getChannel(void )
{

  return ATM128_ADC_SNGL_1_23;
}

# 32 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusP.nc"
static inline uint8_t MicaBusP__Adc3__getChannel(void )
#line 32
{
#line 32
  return 3;
}

# 20 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusAdc.nc"
inline static uint8_t AccelP__AccelAdcX__getChannel(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = MicaBusP__Adc3__getChannel();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 30 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/AccelP.nc"
static inline uint8_t AccelP__ConfigX__getChannel(void )
#line 30
{
  return AccelP__AccelAdcX__getChannel();
}

# 33 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusP.nc"
static inline uint8_t MicaBusP__Adc4__getChannel(void )
#line 33
{
#line 33
  return 4;
}

# 20 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusAdc.nc"
inline static uint8_t AccelP__AccelAdcY__getChannel(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = MicaBusP__Adc4__getChannel();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 42 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/AccelP.nc"
static inline uint8_t AccelP__ConfigY__getChannel(void )
#line 42
{
  return AccelP__AccelAdcY__getChannel();
}

# 30 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusP.nc"
static inline uint8_t MicaBusP__Adc1__getChannel(void )
#line 30
{
#line 30
  return 1;
}

# 20 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusAdc.nc"
inline static uint8_t PhotoTempP__PhotoTempAdc__getChannel(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = MicaBusP__Adc1__getChannel();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 21 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempP.nc"
static inline uint8_t PhotoTempP__Atm128AdcConfig__getChannel(void )
#line 21
{
  return PhotoTempP__PhotoTempAdc__getChannel();
}

# 31 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusP.nc"
static inline uint8_t MicaBusP__Adc2__getChannel(void )
#line 31
{
#line 31
  return 2;
}

# 20 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusAdc.nc"
inline static uint8_t MicP__MicAdc__getChannel(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = MicaBusP__Adc2__getChannel();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 152 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline uint8_t MicP__MicAtm128AdcConfig__getChannel(void )
{
  return MicP__MicAdc__getChannel();
}

# 35 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusP.nc"
static inline uint8_t MicaBusP__Adc6__getChannel(void )
#line 35
{
#line 35
  return 6;
}

# 20 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusAdc.nc"
inline static uint8_t MagP__MagAdcX__getChannel(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = MicaBusP__Adc6__getChannel();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 92 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static inline uint8_t MagP__ConfigX__getChannel(void )
#line 92
{
  return MagP__MagAdcX__getChannel();
}

# 34 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusP.nc"
static inline uint8_t MicaBusP__Adc5__getChannel(void )
#line 34
{
#line 34
  return 5;
}

# 20 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaBusAdc.nc"
inline static uint8_t MagP__MagAdcY__getChannel(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = MicaBusP__Adc5__getChannel();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 104 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static inline uint8_t MagP__ConfigY__getChannel(void )
#line 104
{
  return MagP__MagAdcY__getChannel();
}

# 137 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getChannel(uint8_t arg_0x2add08fcdcd0){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  switch (arg_0x2add08fcdcd0) {
#line 25
    case /*SendingAppC.SensorMts300C.VoltageC.AdcReadClientC*/AdcReadClientC__1__ID:
#line 25
      __nesc_result = VoltageP__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2__ID:
#line 25
      __nesc_result = AccelP__ConfigX__getChannel();
#line 25
      break;
#line 25
    case /*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3__ID:
#line 25
      __nesc_result = AccelP__ConfigY__getChannel();
#line 25
      break;
#line 25
    case /*PhotoTempDeviceC.Adc*/AdcReadClientC__0__ID:
#line 25
      __nesc_result = PhotoTempP__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4__ID:
#line 25
      __nesc_result = MicP__MicAtm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5__ID:
#line 25
      __nesc_result = MagP__ConfigX__getChannel();
#line 25
      break;
#line 25
    case /*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6__ID:
#line 25
      __nesc_result = MagP__ConfigY__getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      __nesc_result = AdcP__Atm128AdcConfig__default__getChannel(arg_0x2add08fcdcd0);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 70 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__channel(void )
#line 70
{
  return AdcP__Atm128AdcConfig__getChannel(AdcP__client);
}

# 40 "/opt/tinyos-2.1.1/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_OFF;
}

# 34 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/AccelP.nc"
static inline uint8_t AccelP__ConfigX__getRefVoltage(void )
#line 34
{
  return ATM128_ADC_VREF_OFF;
}









static inline uint8_t AccelP__ConfigY__getRefVoltage(void )
#line 46
{
  return ATM128_ADC_VREF_OFF;
}

# 25 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempP.nc"
static inline uint8_t PhotoTempP__Atm128AdcConfig__getRefVoltage(void )
#line 25
{
  return ATM128_ADC_VREF_OFF;
}

# 157 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline uint8_t MicP__MicAtm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_OFF;
}

# 96 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static inline uint8_t MagP__ConfigX__getRefVoltage(void )
#line 96
{
  return ATM128_ADC_VREF_OFF;
}









static inline uint8_t MagP__ConfigY__getRefVoltage(void )
#line 108
{
  return ATM128_ADC_VREF_OFF;
}

# 141 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(uint8_t arg_0x2add08fcdcd0){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  switch (arg_0x2add08fcdcd0) {
#line 32
    case /*SendingAppC.SensorMts300C.VoltageC.AdcReadClientC*/AdcReadClientC__1__ID:
#line 32
      __nesc_result = VoltageP__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2__ID:
#line 32
      __nesc_result = AccelP__ConfigX__getRefVoltage();
#line 32
      break;
#line 32
    case /*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3__ID:
#line 32
      __nesc_result = AccelP__ConfigY__getRefVoltage();
#line 32
      break;
#line 32
    case /*PhotoTempDeviceC.Adc*/AdcReadClientC__0__ID:
#line 32
      __nesc_result = PhotoTempP__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4__ID:
#line 32
      __nesc_result = MicP__MicAtm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5__ID:
#line 32
      __nesc_result = MagP__ConfigX__getRefVoltage();
#line 32
      break;
#line 32
    case /*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6__ID:
#line 32
      __nesc_result = MagP__ConfigY__getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      __nesc_result = AdcP__Atm128AdcConfig__default__getRefVoltage(arg_0x2add08fcdcd0);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 74 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__refVoltage(void )
#line 74
{
  return AdcP__Atm128AdcConfig__getRefVoltage(AdcP__client);
}

# 45 "/opt/tinyos-2.1.1/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE;
}

# 38 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/AccelP.nc"
static inline uint8_t AccelP__ConfigX__getPrescaler(void )
#line 38
{
  return ATM128_ADC_PRESCALE;
}









static inline uint8_t AccelP__ConfigY__getPrescaler(void )
#line 50
{
  return ATM128_ADC_PRESCALE;
}

# 29 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempP.nc"
static inline uint8_t PhotoTempP__Atm128AdcConfig__getPrescaler(void )
#line 29
{
  return ATM128_ADC_PRESCALE;
}

# 162 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline uint8_t MicP__MicAtm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE;
}

# 100 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static inline uint8_t MagP__ConfigX__getPrescaler(void )
#line 100
{
  return ATM128_ADC_PRESCALE;
}









static inline uint8_t MagP__ConfigY__getPrescaler(void )
#line 112
{
  return ATM128_ADC_PRESCALE;
}

# 145 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getPrescaler(uint8_t arg_0x2add08fcdcd0){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x2add08fcdcd0) {
#line 39
    case /*SendingAppC.SensorMts300C.VoltageC.AdcReadClientC*/AdcReadClientC__1__ID:
#line 39
      __nesc_result = VoltageP__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2__ID:
#line 39
      __nesc_result = AccelP__ConfigX__getPrescaler();
#line 39
      break;
#line 39
    case /*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3__ID:
#line 39
      __nesc_result = AccelP__ConfigY__getPrescaler();
#line 39
      break;
#line 39
    case /*PhotoTempDeviceC.Adc*/AdcReadClientC__0__ID:
#line 39
      __nesc_result = PhotoTempP__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4__ID:
#line 39
      __nesc_result = MicP__MicAtm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5__ID:
#line 39
      __nesc_result = MagP__ConfigX__getPrescaler();
#line 39
      break;
#line 39
    case /*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6__ID:
#line 39
      __nesc_result = MagP__ConfigY__getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = AdcP__Atm128AdcConfig__default__getPrescaler(arg_0x2add08fcdcd0);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__prescaler(void )
#line 78
{
  return AdcP__Atm128AdcConfig__getPrescaler(AdcP__client);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TinyosNetworkP__grantTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TinyosNetworkP__grantTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 198 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id)
#line 198
{
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      CC2420TinyosNetworkP__grantTask__postTask();
    }
  CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
  return SUCCESS;
}

#line 222
static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client)
#line 222
{
  CC2420TinyosNetworkP__Resource__release(client);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void CC2420TinyosNetworkP__Resource__granted(uint8_t arg_0x2add08ce3550){
#line 92
  switch (arg_0x2add08ce3550) {
#line 92
    case CC2420ActiveMessageC__CC2420_AM_SEND_ID:
#line 92
      CC2420ActiveMessageP__RadioResource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      CC2420TinyosNetworkP__Resource__default__granted(arg_0x2add08ce3550);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 58 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 58
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 59
    {
      if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
          uint8_t id = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead;

#line 62
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead];
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
            }
#line 65
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
          {
            unsigned char __nesc_temp = 
#line 66
            id;

            {
#line 66
              __nesc_atomic_end(__nesc_atomic); 
#line 66
              return __nesc_temp;
            }
          }
        }
#line 68
      {
        unsigned char __nesc_temp = 
#line 68
        /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

        {
#line 68
          __nesc_atomic_end(__nesc_atomic); 
#line 68
          return __nesc_temp;
        }
      }
    }
#line 71
    __nesc_atomic_end(__nesc_atomic); }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
#line 43
inline static bool CC2420TinyosNetworkP__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 148 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__grantTask__runTask(void )
#line 148
{


  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && !CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__Queue__dequeue();

          if (CC2420TinyosNetworkP__resource_owner != CC2420TinyosNetworkP__OWNER_NONE) {
              CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
            }
        }
    }
  else 
#line 159
    {
      if (CC2420TinyosNetworkP__next_owner != CC2420TinyosNetworkP__resource_owner) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__next_owner;
          CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
        }
    }
}

# 278 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 278
{
}

# 59 "/opt/tinyos-2.1.1/tos/interfaces/SendNotifier.nc"
inline static void CC2420ActiveMessageP__SendNotifier__aboutToSend(am_id_t arg_0x2add08d7e258, am_addr_t dest, message_t * msg){
#line 59
    CC2420ActiveMessageP__SendNotifier__default__aboutToSend(arg_0x2add08d7e258, dest, msg);
#line 59
}
#line 59
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = UniqueSendP__Send__send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 77 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId){
#line 77
  CC2420PacketP__CC2420Packet__setNetwork(p_msg, networkId);
#line 77
}
#line 77
# 73 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len)
#line 73
{
  CC2420TinyosNetworkP__CC2420Packet__setNetwork(msg, 0x3f);
  return CC2420TinyosNetworkP__SubSend__send(msg, len);
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t CC2420ActiveMessageP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 45 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
inline static error_t UniqueSendP__State__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(2U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 114 "/opt/tinyos-2.1.1/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg)
#line 114
{
  return (cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 301 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 301
{
  uint8_t *base = target;

#line 303
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 240
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

#line 257
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

#line 281
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

#line 276
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

#line 251
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

# 545 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca)
#line 545
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 546
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 548
            ECANCEL;

            {
#line 548
              __nesc_atomic_end(__nesc_atomic); 
#line 548
              return __nesc_temp;
            }
          }
        }
#line 551
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 552
            FAIL;

            {
#line 552
              __nesc_atomic_end(__nesc_atomic); 
#line 552
              return __nesc_temp;
            }
          }
        }


      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_cca = cca;
      CC2420TransmitP__m_msg = p_msg;
      CC2420TransmitP__totalCcaChecks = 0;
    }
#line 562
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
      CC2420TransmitP__loadTXFIFO();
    }

  return SUCCESS;
}

#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca)
#line 192
{
  return CC2420TransmitP__send(p_msg, useCca);
}

# 51 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TransmitP__Send__send(p_msg, useCca);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 288 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg)
#line 289
{
}

# 95 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCca(am_id_t arg_0x2add08d7ed60, message_t * msg){
#line 95
    CC2420ActiveMessageP__RadioBackoff__default__requestCca(arg_0x2add08d7ed60, msg);
#line 95
}
#line 95
# 237 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg)
#line 237
{

  CC2420ActiveMessageP__RadioBackoff__requestCca(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 95 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg){
#line 95
  CC2420ActiveMessageP__SubBackoff__requestCca(msg);
#line 95
}
#line 95
# 111 "/opt/tinyos-2.1.1/tos/system/StateImplP.nc"
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP__state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
inline static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(1U, reqState);
#line 51
}
#line 51
#line 66
inline static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP__State__isState(1U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 118 "/opt/tinyos-2.1.1/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg)
#line 118
{
  return (cc2420_metadata_t *)msg->metadata;
}

# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
#line 42
inline static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 122 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len)
#line 122
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 124
  cc2420_header_t *header = CC2420CsmaP__CC2420PacketBody__getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP__CC2420PacketBody__getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    {
      if (!CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 129
            FAIL;

            {
#line 129
              __nesc_atomic_end(__nesc_atomic); 
#line 129
              return __nesc_temp;
            }
          }
        }
#line 132
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_TRANSMITTING);
      CC2420CsmaP__m_msg = p_msg;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_hton_leuint8(header->length.data, len + CC2420_SIZE);



  (__nesc_temp42 = header->fcf.data, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (1 << IEEE154_FCF_ACK_REQ)));

  (__nesc_temp43 = header->fcf.data, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));

  __nesc_hton_int8(metadata->ack.data, FALSE);
  __nesc_hton_uint8(metadata->rssi.data, 0);
  __nesc_hton_uint8(metadata->lqi.data, 0);

  __nesc_hton_uint32(metadata->timestamp.data, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP__ccaOn = TRUE;
  CC2420CsmaP__RadioBackoff__requestCca(CC2420CsmaP__m_msg);

  CC2420CsmaP__CC2420Transmit__send(CC2420CsmaP__m_msg, CC2420CsmaP__ccaOn);
  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t UniqueSendP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420CsmaP__Send__send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 45 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 118 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static bool Atm128SpiP__ResourceArbiter__isOwner(uint8_t arg_0x2add08784060){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(arg_0x2add08784060);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 366 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline uint8_t Atm128SpiP__Resource__isOwner(uint8_t id)
#line 366
{
  return Atm128SpiP__ResourceArbiter__isOwner(id);
}

# 118 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static bool HplCC2420SpiP__SubResource__isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = Atm128SpiP__Resource__isOwner(0U);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 83 "/opt/tinyos-2.1.1/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline bool HplCC2420SpiP__Resource__isOwner(void )
{
  return HplCC2420SpiP__SubResource__isOwner();
}

# 118 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = HplCC2420SpiP__Resource__isOwner();
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )56U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 30
}
#line 30
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 0;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 35
}
#line 35
# 171 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2add088446e0){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x2add088446e0);
#line 49
}
#line 49
# 169 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 169
{
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x2add088451a0){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x2add088451a0);
#line 51
}
#line 51
# 84 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 86
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      FAIL;

#line 93
      return __nesc_temp;
    }
  }
}

# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__immediateRequest(uint8_t arg_0x2add08784060){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(arg_0x2add08784060);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 339 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id)
#line 339
{
  error_t result = Atm128SpiP__ResourceArbiter__immediateRequest(id);

#line 341
  if (result == SUCCESS) {
      Atm128SpiP__startSpi();
    }
  return result;
}

# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = Atm128SpiP__Resource__immediateRequest(0U);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 56 "/opt/tinyos-2.1.1/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__immediateRequest(void )
{
  error_t error = HplCC2420SpiP__SubResource__immediateRequest();

#line 59
  if (error == SUCCESS) 
    {
      HplCC2420SpiP__SS__makeOutput();
      HplCC2420SpiP__SS__clr();
    }
  return error;
}

# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplCC2420SpiP__Resource__immediateRequest();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 156 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 156
{
  if (isMaster) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 4);
    }
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 1;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 33
}
#line 33
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 35
}
#line 35
# 79 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 79
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 66 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 66
  HplAtm128SpiP__SPI__initMaster();
#line 66
}
#line 66
# 213 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 213
{
  if (on) {
      * (volatile uint8_t *)(0x0E + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x0E + 0x20) &= ~(1 << 0);
    }
}

# 125 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 125
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 125
}
#line 125
# 169 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 169
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    }
}

# 108 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 108
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 108
}
#line 108
# 183 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 183
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    }
}

# 111 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 111
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 111
}
#line 111
# 200 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 200
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~(1 | 0)) | v;
}

# 114 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 114
  HplAtm128SpiP__SPI__setClock(speed);
#line 114
}
#line 114
# 118 "/opt/tinyos-2.1.1/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP__state[id] = StateImplP__S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 54 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 54
{
  /* atomic removed: atomic calls only */
#line 55
  {
    unsigned char __nesc_temp = 
#line 55
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 55
    return __nesc_temp;
  }
}

#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 78
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 79
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 167 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2add088451a0){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x2add088451a0);
#line 43
}
#line 43
# 71 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 73
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
        {
          unsigned char __nesc_temp = 
#line 78
          SUCCESS;

#line 78
          return __nesc_temp;
        }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

#line 80
      return __nesc_temp;
    }
  }
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__request(uint8_t arg_0x2add08784060){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(arg_0x2add08784060);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 80 "/opt/tinyos-2.1.1/tos/interfaces/ArbiterInfo.nc"
inline static bool Atm128SpiP__ArbiterInfo__inUse(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 347 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__request(uint8_t id)
#line 347
{
  /* atomic removed: atomic calls only */
#line 348
  {
    if (!Atm128SpiP__ArbiterInfo__inUse()) {
        Atm128SpiP__startSpi();
      }
  }
  return Atm128SpiP__ResourceArbiter__request(id);
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = Atm128SpiP__Resource__request(0U);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 51 "/opt/tinyos-2.1.1/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__request(void )
{
  return HplCC2420SpiP__SubResource__request();
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = HplCC2420SpiP__Resource__request();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 99 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 99
{
#line 99
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 86 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 86
  HplAtm128SpiP__SPI__write(data);
#line 86
}
#line 86
# 59 "/opt/tinyos-2.1.1/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = Atm128SpiP__SpiPacket__send(txBuf, rxBuf, len);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 34 "/opt/tinyos-2.1.1/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = Atm128SpiP__SpiByte__write(tx);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 126 "/opt/tinyos-2.1.1/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 214 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 82 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t Atm128SpiP__zeroTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Atm128SpiP__zeroTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
    }
}

# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 181 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP__Packet__payloadLength(message_t *msg)
#line 181
{
  return __nesc_ntoh_leuint8(CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg)->length.data) - CC2420_SIZE;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 170 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void )
#line 170
{
  return 28;
}

# 101 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static uint8_t UniqueSendP__SubSend__maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = CC2420CsmaP__Send__maxPayloadLength();
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 95 "/opt/tinyos-2.1.1/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void )
#line 95
{
  return UniqueSendP__SubSend__maxPayloadLength();
}

# 101 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = UniqueSendP__Send__maxPayloadLength();
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 82 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void )
#line 82
{
  return CC2420TinyosNetworkP__SubSend__maxPayloadLength();
}

# 101 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__maxPayloadLength();
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 189 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void )
#line 189
{
  return CC2420ActiveMessageP__SubSend__maxPayloadLength();
}

# 287 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void )
#line 287
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 288
    {
      unsigned short __nesc_temp = 
#line 288
      CC2420ControlP__m_pan;

      {
#line 288
        __nesc_atomic_end(__nesc_atomic); 
#line 288
        return __nesc_temp;
      }
    }
#line 290
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void ){
#line 70
  unsigned short __nesc_result;
#line 70

#line 70
  __nesc_result = CC2420ControlP__CC2420Config__getPanAddr();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 184 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id)
#line 184
{
  if (CC2420TinyosNetworkP__resource_owner == id) {
#line 185
    return EALREADY;
    }
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = id;
          return SUCCESS;
        }
      return FAIL;
    }
  else 
#line 193
    {
      CC2420TinyosNetworkP__resource_owner = id;
      return SUCCESS;
    }
}

# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = CC2420TinyosNetworkP__Resource__immediateRequest(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 54 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 54
{
  /* atomic removed: atomic calls only */
#line 55
  {
    unsigned char __nesc_temp = 
#line 55
    /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY || /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail == id;

#line 55
    return __nesc_temp;
  }
}

#line 72
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 72
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (!/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = id;
            }
          else {
#line 78
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail] = id;
            }
#line 79
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = id;
          {
            unsigned char __nesc_temp = 
#line 80
            SUCCESS;

            {
#line 80
              __nesc_atomic_end(__nesc_atomic); 
#line 80
              return __nesc_temp;
            }
          }
        }
#line 82
      {
        unsigned char __nesc_temp = 
#line 82
        EBUSY;

        {
#line 82
          __nesc_atomic_end(__nesc_atomic); 
#line 82
          return __nesc_temp;
        }
      }
    }
#line 85
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 167 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id)
#line 167
{

  CC2420TinyosNetworkP__grantTask__postTask();

  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {

      return CC2420TinyosNetworkP__Queue__enqueue(id);
    }
  else 
#line 174
    {
      if (id == CC2420TinyosNetworkP__resource_owner) {
          return EALREADY;
        }
      else 
#line 177
        {
          CC2420TinyosNetworkP__next_owner = id;
          return SUCCESS;
        }
    }
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__Resource__request(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 92 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 118
}
#line 118
# 204 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 67
}
#line 67
# 89 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 264 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

# 68 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
#line 68
{
  LedsP__Led0__set();
  ;
#line 70
  ;
}

# 50 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void SendingC__Leds__led0Off(void ){
#line 50
  LedsP__Leds__led0Off();
#line 50
}
#line 50
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 2);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 30
}
#line 30
# 63 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 63
{
  LedsP__Led0__clr();
  ;
#line 65
  ;
}

# 45 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void SendingC__Leds__led0On(void ){
#line 45
  LedsP__Leds__led0On();
#line 45
}
#line 45
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x2add081b6488, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = CC2420ActiveMessageP__AMSend__send(arg_0x2add081b6488, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP__AMPacket__destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
#line 136
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = CC2420ActiveMessageP__AMPacket__type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 185 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 185
{
  __nesc_hton_leuint8(CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg)->length.data, len + CC2420_SIZE);
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  CC2420ActiveMessageP__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 156 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type)
#line 156
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 158
  __nesc_hton_leuint8(header->type.data, type);
}

# 151 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  CC2420ActiveMessageP__AMPacket__setType(amsg, t);
#line 151
}
#line 151
# 136 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 136
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 138
  __nesc_hton_leuint16(header->dest.data, addr);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  CC2420ActiveMessageP__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 6);
  return /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t SendingC__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Resource__request(uint8_t arg_0x2add08ff8e30){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__request(arg_0x2add08ff8e30);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 31 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline error_t /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__read(uint8_t client)
#line 31
{
  return /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Resource__request(client);
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t SendingC__AccelY__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*AccelReadP.MultiplexY*/ArbitratedReadC__2__Read__read(/*SendingAppC.SensorMts300C.AccelYC*/AccelYC__0__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Resource__request(uint8_t arg_0x2add08ff8e30){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__request(arg_0x2add08ff8e30);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 31 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline error_t /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__read(uint8_t client)
#line 31
{
  return /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Resource__request(client);
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static error_t SendingC__AccelX__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*AccelReadP.MultiplexX*/ArbitratedReadC__1__Read__read(/*SendingAppC.SensorMts300C.AccelXC*/AccelXC__0__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 114 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void * CC2420ActiveMessageP__SubSend__getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__getPayload(msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 193 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void *CC2420ActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len)
#line 193
{
  return CC2420ActiveMessageP__SubSend__getPayload(msg, len);
}

# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void * SendingC__Packet__getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = CC2420ActiveMessageP__Packet__getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 53 "SendingC.nc"
static inline void SendingC__Timer0__fired(void )
#line 53
{
  ++SendingC__sayac;
  SendingC__sayac %= 81;
  SendingC__btrpkt = (RadyoMsg *)SendingC__Packet__getPayload(&SendingC__pkt, (void *)0);
  SendingC__AccelX__read();
  SendingC__AccelY__read();
  if (__nesc_ntoh_uint16(SendingC__btrpkt->AX.data) != 0 && __nesc_ntoh_uint16(SendingC__btrpkt->AY.data) != 0) {
      if (SendingC__AMSend__send(AM_BROADCAST_ADDR, &SendingC__pkt, sizeof(RadyoMsg )) == SUCCESS) {
          if (SendingC__sayac % 70 == 0) {
#line 61
            SendingC__Leds__led0On();
            }
#line 62
          if (SendingC__sayac % 80 == 0) {
#line 62
            SendingC__Leds__led0Off();
            }
        }
    }
}

# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP__18__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )53U &= ~(1 << 2);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void SounderP__SounderPin__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP__18__IO__clr();
#line 30
}
#line 30
# 28 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/SounderP.nc"
static inline void SounderP__Timer__fired(void )
#line 28
{
  SounderP__SounderPin__clr();
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 130 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__resId == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__default_owner_id) {
          if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_GRANTING) {
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_IMM_GRANTING) {
                /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__resId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__reqResId;
                /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 181 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline uint8_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__isOwner(void )
#line 181
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 182
    {
      unsigned char __nesc_temp = 
#line 182
      /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED
       || (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__resId == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__default_owner_id
       && (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_GRANTING || /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_IMM_GRANTING));

      {
#line 182
        __nesc_atomic_end(__nesc_atomic); 
#line 182
        return __nesc_temp;
      }
    }
#line 184
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static bool /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__isOwner();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 92 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error_t error)
#line 92
{
  if (/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__isOwner()) {
    /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__release();
    }
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void AccelP__SplitControl__startDone(error_t error){
#line 92
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__SplitControl__startDone(error);
#line 92
}
#line 92
# 63 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/AccelP.nc"
static inline void AccelP__Timer__fired(void )
#line 63
{
  AccelP__SplitControl__startDone(SUCCESS);
}

# 130 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceDefaultOwner__release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__resId == /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__default_owner_id) {
          if (/*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__state == /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__RES_GRANTING) {
              /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__state == /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__RES_IMM_GRANTING) {
                /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__resId = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__reqResId;
                /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__state = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 181 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline uint8_t /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceDefaultOwner__isOwner(void )
#line 181
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 182
    {
      unsigned char __nesc_temp = 
#line 182
      /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__state == /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__RES_CONTROLLED
       || (/*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__resId == /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__default_owner_id
       && (/*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__state == /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__RES_GRANTING || /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__state == /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__RES_IMM_GRANTING));

      {
#line 182
        __nesc_atomic_end(__nesc_atomic); 
#line 182
        return __nesc_temp;
      }
    }
#line 184
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static bool /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__ResourceDefaultOwner__isOwner(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__ResourceDefaultOwner__isOwner();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 92 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__startDone(error_t error)
#line 92
{
  if (/*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__ResourceDefaultOwner__isOwner()) {
    /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__ResourceDefaultOwner__release();
    }
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__startDone(error_t error){
#line 92
  /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__SplitControl__startDone(error);
#line 92
}
#line 92
# 27 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline void /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Timer__fired(void )
#line 27
{
  if (/*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__PhotoTempResource__isOwner()) {
    /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__SplitControl__startDone(SUCCESS);
    }
}

# 130 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceDefaultOwner__release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__resId == /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__default_owner_id) {
          if (/*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__state == /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__RES_GRANTING) {
              /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__state == /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__RES_IMM_GRANTING) {
                /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__resId = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__reqResId;
                /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__state = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 181 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline uint8_t /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceDefaultOwner__isOwner(void )
#line 181
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 182
    {
      unsigned char __nesc_temp = 
#line 182
      /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__state == /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__RES_CONTROLLED
       || (/*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__resId == /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__default_owner_id
       && (/*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__state == /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__RES_GRANTING || /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__state == /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__RES_IMM_GRANTING));

      {
#line 182
        __nesc_atomic_end(__nesc_atomic); 
#line 182
        return __nesc_temp;
      }
    }
#line 184
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static bool /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__isOwner(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__ResourceDefaultOwner__isOwner();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 92 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__startDone(error_t error)
#line 92
{
  if (/*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__isOwner()) {
    /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__ResourceDefaultOwner__release();
    }
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__startDone(error_t error){
#line 92
  /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__SplitControl__startDone(error);
#line 92
}
#line 92
# 27 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/PhotoTempControlP.nc"
static inline void /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Timer__fired(void )
#line 27
{
  if (/*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__PhotoTempResource__isOwner()) {
    /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__SplitControl__startDone(SUCCESS);
    }
}

# 130 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceDefaultOwner__release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__resId == /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__default_owner_id) {
          if (/*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__state == /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__RES_GRANTING) {
              /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__state == /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__RES_IMM_GRANTING) {
                /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__resId = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__reqResId;
                /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__state = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 181 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline uint8_t /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceDefaultOwner__isOwner(void )
#line 181
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 182
    {
      unsigned char __nesc_temp = 
#line 182
      /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__state == /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__RES_CONTROLLED
       || (/*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__resId == /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__default_owner_id
       && (/*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__state == /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__RES_GRANTING || /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__state == /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__RES_IMM_GRANTING));

      {
#line 182
        __nesc_atomic_end(__nesc_atomic); 
#line 182
        return __nesc_temp;
      }
    }
#line 184
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static bool /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__ResourceDefaultOwner__isOwner(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__ResourceDefaultOwner__isOwner();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 92 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__startDone(error_t error)
#line 92
{
  if (/*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__ResourceDefaultOwner__isOwner()) {
    /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__ResourceDefaultOwner__release();
    }
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void MicP__SplitControl__startDone(error_t error){
#line 92
  /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__SplitControl__startDone(error);
#line 92
}
#line 92
# 66 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline void MicP__Timer__fired(void )
#line 66
{
  MicP__SplitControl__startDone(SUCCESS);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 130 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceDefaultOwner__release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__resId == /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__default_owner_id) {
          if (/*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__state == /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__RES_GRANTING) {
              /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__state == /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__RES_IMM_GRANTING) {
                /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__resId = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__reqResId;
                /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__state = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 181 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline uint8_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceDefaultOwner__isOwner(void )
#line 181
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 182
    {
      unsigned char __nesc_temp = 
#line 182
      /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__state == /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__RES_CONTROLLED
       || (/*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__resId == /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__default_owner_id
       && (/*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__state == /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__RES_GRANTING || /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__state == /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__RES_IMM_GRANTING));

      {
#line 182
        __nesc_atomic_end(__nesc_atomic); 
#line 182
        return __nesc_temp;
      }
    }
#line 184
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static bool /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__ResourceDefaultOwner__isOwner(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceDefaultOwner__isOwner();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 92 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__startDone(error_t error)
#line 92
{
  if (/*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__ResourceDefaultOwner__isOwner()) {
    /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__ResourceDefaultOwner__release();
    }
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void MagP__SplitControl__startDone(error_t error){
#line 92
  /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__SplitControl__startDone(error);
#line 92
}
#line 92
# 33 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static inline void MagP__Timer__fired(void )
#line 33
{
  MagP__SplitControl__startDone(SUCCESS);
}

# 193 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2add08bd3778){
#line 72
  switch (arg_0x2add08bd3778) {
#line 72
    case 1U:
#line 72
      SendingC__Timer0__fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      SounderP__Timer__fired();
#line 72
      break;
#line 72
    case 3U:
#line 72
      AccelP__Timer__fired();
#line 72
      break;
#line 72
    case 4U:
#line 72
      /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__Timer__fired();
#line 72
      /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__Timer__fired();
#line 72
      break;
#line 72
    case 5U:
#line 72
      MicP__Timer__fired();
#line 72
      break;
#line 72
    case 6U:
#line 72
      MagP__Timer__fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2add08bd3778);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 201 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 201
{
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(uint8_t arg_0x2add08f4b328){
#line 43
    /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(arg_0x2add08f4b328);
#line 43
}
#line 43
# 87 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 87
{
  /* atomic removed: atomic calls only */
#line 88
  {
    if (!/*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(id)) {
        /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      EBUSY;

#line 93
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 74 "/opt/tinyos-2.1.1/tos/lib/power/PowerManagerP.nc"
static inline void /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 74
{
  if (/*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopping == FALSE) {
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__postTask();
    }
  else {
#line 78
    /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__requested = TRUE;
    }
}

# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void ){
#line 73
  /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 135 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 135
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 45
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 45
}
#line 45
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void )
#line 50
{
#line 50
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer0AsyncP__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 206 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 206
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 67
}
#line 67
# 128 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 72
}
#line 72
# 226 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 105
  unsigned long __nesc_result;
#line 105

#line 105
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

#line 257
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 257
{
#line 257
  return __nesc_ntoh_uint8(source);
}

# 210 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 210
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__BareReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = CC2420TinyosNetworkP__BareReceive__default__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 270 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 270
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP__Snoop__receive(am_id_t arg_0x2add08d81480, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = CC2420ActiveMessageP__Snoop__default__receive(arg_0x2add08d81480, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 266 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 266
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP__Receive__receive(am_id_t arg_0x2add08d83908, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = CC2420ActiveMessageP__Receive__default__receive(arg_0x2add08d83908, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 61 "/opt/tinyos-2.1.1/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 61
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos-2.1.1/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 122 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void )
#line 122
{
  return CC2420ActiveMessageP__ActiveMessageAddress__amAddress();
}

#line 146
static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg)
#line 146
{
  return CC2420ActiveMessageP__AMPacket__destination(amsg) == CC2420ActiveMessageP__AMPacket__address() || 
  CC2420ActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

#line 206
static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 206
{

  if (CC2420ActiveMessageP__AMPacket__isForMe(msg)) {
      return CC2420ActiveMessageP__Receive__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
  else {
      return CC2420ActiveMessageP__Snoop__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__ActiveReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP__SubReceive__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 75 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t *p_msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420PacketP__CC2420Packet__getNetwork(p_msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 127 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 127
{

  if (! __nesc_ntoh_int8(CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(msg)->crc.data)) {
      return msg;
    }

  if (CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg) == 0x3f) {
      return CC2420TinyosNetworkP__ActiveReceive__receive(msg, payload, len);
    }
  else 
#line 135
    {
      cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 137
      return CC2420TinyosNetworkP__BareReceive__receive(msg, & hdr->network, len + AM_OVERHEAD);
    }
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = CC2420TinyosNetworkP__SubReceive__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 137 "/opt/tinyos-2.1.1/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn)
#line 137
{
  uint8_t element = UniqueReceiveP__recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 141
    {
      if (element == UniqueReceiveP__INVALID_ELEMENT || UniqueReceiveP__writeIndex == element) {

          element = UniqueReceiveP__writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP__receivedMessages[element].source = msgSource;
      UniqueReceiveP__receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP__writeIndex++;
          UniqueReceiveP__writeIndex %= 4;
        }
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}


static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 158
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__DuplicateReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = UniqueReceiveP__DuplicateReceive__default__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 111 "/opt/tinyos-2.1.1/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 111
{
  int i;

#line 113
  UniqueReceiveP__recycleSourceElement = UniqueReceiveP__INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 115
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP__receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP__receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 120
                    TRUE;

                    {
#line 120
                      __nesc_atomic_end(__nesc_atomic); 
#line 120
                      return __nesc_temp;
                    }
                  }
                }
#line 123
              UniqueReceiveP__recycleSourceElement = i;
            }
        }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 85 "/opt/tinyos-2.1.1/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
#line 86
{
  uint16_t msgSource = __nesc_ntoh_leuint16(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->src.data);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->dsn.data);

  if (UniqueReceiveP__hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP__DuplicateReceive__receive(msg, payload, len);
    }
  else {
      UniqueReceiveP__insert(msgSource, msgDsn);
      return UniqueReceiveP__Receive__receive(msg, payload, len);
    }
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = UniqueReceiveP__SubReceive__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420ControlP__CC2420Config__getShortAddr();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 332 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void )
#line 332
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 333
    {
      unsigned char __nesc_temp = 
#line 333
      CC2420ControlP__addressRecognition;

      {
#line 333
        __nesc_atomic_end(__nesc_atomic); 
#line 333
        return __nesc_temp;
      }
    }
#line 335
    __nesc_atomic_end(__nesc_atomic); }
}

# 86 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void ){
#line 86
  unsigned char __nesc_result;
#line 86

#line 86
  __nesc_result = CC2420ControlP__CC2420Config__isAddressRecognitionEnabled();
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 819 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg)
#line 819
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(msg);

  if (!CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled()) {
      return TRUE;
    }

  return __nesc_ntoh_leuint16(header->dest.data) == CC2420ReceiveP__CC2420Config__getShortAddr()
   || __nesc_ntoh_leuint16(header->dest.data) == AM_BROADCAST_ADDR;
}

# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 671 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
#line 671
{
  cc2420_metadata_t *metadata = CC2420ReceiveP__CC2420PacketBody__getMetadata(CC2420ReceiveP__m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.data);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.data, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.data, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.data, buf[length - 1]);

  if (CC2420ReceiveP__passesAddressCheck(CC2420ReceiveP__m_p_rx_buf) && length >= CC2420_SIZE) {
#line 696
      CC2420ReceiveP__m_p_rx_buf = CC2420ReceiveP__Receive__receive(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 699
    CC2420ReceiveP__receivingPacket = FALSE;
#line 699
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
}

# 95 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP__release = FALSE;
}

# 31 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
#line 31
  CC2420SpiP__ChipSpiResource__abortRelease();
#line 31
}
#line 31
# 375 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 375
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

# 24 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 94 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 94
{
}

# 72 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 72
  HplAtm128SpiP__SPI__sleep();
#line 72
}
#line 72
#line 99
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 99
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 99
}
#line 99
# 120 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
#line 120
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 122
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
}

# 173 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2add088446e0){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2add088446e0);
#line 55
}
#line 55
# 58 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead;

#line 62
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 65
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 50 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 51
  {
    unsigned char __nesc_temp = 
#line 51
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 51
    return __nesc_temp;
  }
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 97 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

  /* atomic removed: atomic calls only */
#line 99
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
        if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          }
        else {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
          }
        released = TRUE;
      }
  }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__release(uint8_t arg_0x2add08784060){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(arg_0x2add08784060);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 356 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__release(uint8_t id)
#line 356
{
  error_t error = Atm128SpiP__ResourceArbiter__release(id);

  /* atomic removed: atomic calls only */
#line 358
  {
    if (!Atm128SpiP__ArbiterInfo__inUse()) {
        Atm128SpiP__stopSpi();
      }
  }
  return error;
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = Atm128SpiP__Resource__release(0U);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )56U |= 1 << 0;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 29
}
#line 29
# 75 "/opt/tinyos-2.1.1/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__release(void )
{
  if (HplCC2420SpiP__SubResource__isOwner()) {
    HplCC2420SpiP__SS__set();
    }
  return HplCC2420SpiP__SubResource__release();
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = HplCC2420SpiP__Resource__release();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 178 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline uint8_t CC2420SpiP__Resource__isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP__m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 118 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
#line 87
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
#line 78
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 184 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 184
{
  CC2420SpiP__grant__postTask();
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void HplCC2420SpiP__Resource__granted(void ){
#line 92
  CC2420SpiP__SpiResource__granted();
#line 92
}
#line 92
# 67 "/opt/tinyos-2.1.1/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline void HplCC2420SpiP__SubResource__granted(void )
{
  HplCC2420SpiP__SS__makeOutput();
  HplCC2420SpiP__SS__clr();

  HplCC2420SpiP__Resource__granted();
}

# 374 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Resource__default__granted(uint8_t id)
#line 374
{
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void Atm128SpiP__Resource__granted(uint8_t arg_0x2add08772ae0){
#line 92
  switch (arg_0x2add08772ae0) {
#line 92
    case 0U:
#line 92
      HplCC2420SpiP__SubResource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP__Resource__default__granted(arg_0x2add08772ae0);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 370 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id)
#line 370
{
  Atm128SpiP__Resource__granted(id);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x2add08846020){
#line 92
  Atm128SpiP__ResourceArbiter__granted(arg_0x2add08846020);
#line 92
}
#line 92
# 155 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}

# 71 "/opt/tinyos-2.1.1/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 71
  CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 71
}
#line 71
# 241 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 241
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 255
    __nesc_atomic_end(__nesc_atomic); }
}

# 484 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 485
{
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 29
}
#line 29
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 139 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__stop(void )
#line 139
{
#line 139
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 4);
}

# 59 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void ){
#line 59
  HplAtm128Timer1P__CompareA__stop();
#line 59
}
#line 59
# 65 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void )
#line 65
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop();
#line 62
}
#line 62
# 91 "/opt/tinyos-2.1.1/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop();
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop();
#line 62
}
#line 62
# 42 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 387 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg)
#line 387
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP__m_msg) {
      ack_header = CC2420TransmitP__CC2420PacketBody__getHeader(ack_msg);
      msg_header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);

      if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.data) == __nesc_ntoh_leuint8(ack_header->dsn.data)) {
          CC2420TransmitP__BackoffTimer__stop();

          msg_metadata = CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.data);

          __nesc_hton_int8(msg_metadata->ack.data, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.data, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.data, ack_buf[length] & 0x7f);
          CC2420TransmitP__signalDone(SUCCESS);
        }
    }
}

# 63 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP__CC2420Receive__receive(type, message);
#line 63
}
#line 63
# 59 "/opt/tinyos-2.1.1/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__clear(message_t * msg){
#line 59
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 59
}
#line 59
# 143 "/opt/tinyos-2.1.1/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.data, value);
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__set(message_t * msg, CC2420ReceiveP__PacketTimeStamp__size_type value){
#line 67
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 67
}
#line 67
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )33U & (1 << 6)) != 0;
}

# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )54U & (1 << 7)) != 0;
}

# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFO__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 209 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

# 62 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 30
}
#line 30
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SACK__strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SACK);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 359 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void )
#line 359
{
  /* atomic removed: atomic calls only */
#line 360
  {
    unsigned char __nesc_temp = 
#line 360
    CC2420ControlP__hwAutoAckDefault;

#line 360
    return __nesc_temp;
  }
}

# 105 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420ControlP__CC2420Config__isHwAutoAckDefault();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 366 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void )
#line 366
{
  /* atomic removed: atomic calls only */
#line 367
  {
    unsigned char __nesc_temp = 
#line 367
    CC2420ControlP__autoAckEnabled;

#line 367
    return __nesc_temp;
  }
}

# 110 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420ControlP__CC2420Config__isAutoAckEnabled();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 525 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 526
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

#line 530
  CC2420ReceiveP__rxFrameLength = buf[0];

  switch (CC2420ReceiveP__m_state) {

      case CC2420ReceiveP__S_RX_LENGTH: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;



      if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) 



        {

          CC2420ReceiveP__flush();
        }
      else {
          if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {
              CC2420ReceiveP__m_bytes_left -= CC2420ReceiveP__rxFrameLength + 1;
            }

          if (CC2420ReceiveP__rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP__rxFrameLength > 0) {
                  if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP__receivingPacket = FALSE;
                  CC2420ReceiveP__CSN__set();
                  CC2420ReceiveP__SpiResource__release();
                  CC2420ReceiveP__waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP__flush();
            }
        }
      break;

      case CC2420ReceiveP__S_RX_FCF: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;










      if (CC2420ReceiveP__CC2420Config__isAutoAckEnabled() && !CC2420ReceiveP__CC2420Config__isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
#line 592
          header->fcf.data) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.data) == CC2420ReceiveP__CC2420Config__getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.data) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__SACK__strobe();
              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__RXFIFO__beginRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
              CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
              return;
            }
        }

      CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
      CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP__S_RX_PAYLOAD: 

        CC2420ReceiveP__CSN__set();
      if (!CC2420ReceiveP__m_missed_packets) {

          CC2420ReceiveP__SpiResource__release();
        }




      if ((((
#line 621
      CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get())
       || !CC2420ReceiveP__m_timestamp_size)
       || CC2420ReceiveP__rxFrameLength <= 10) {
          CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
        }
      else {
          if (CC2420ReceiveP__m_timestamp_size == 1) {
            CC2420ReceiveP__PacketTimeStamp__set(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
            }
#line 629
          CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
          CC2420ReceiveP__m_timestamp_size--;

          if (CC2420ReceiveP__m_timestamp_size > 0) {
              CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
              CC2420ReceiveP__m_timestamp_head = 0;
              CC2420ReceiveP__m_timestamp_size = 0;
            }
        }



      if (buf[CC2420ReceiveP__rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 643
          CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP__receiveDone_task__postTask();
              return;
            }
        }

      CC2420ReceiveP__waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP__receivingPacket = FALSE;
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__SpiResource__release();
      break;
    }
}

# 370 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x2add086c8328, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x2add086c8328) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x2add086c8328, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 102 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 102
{
  return CC2420SpiP__attemptRelease();
}

# 39 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 75 "/opt/tinyos-2.1.1/tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
}

#line 146
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 55 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(dt);
#line 55
}
#line 55
# 280 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg)
#line 281
{
}

# 81 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(am_id_t arg_0x2add08d7ed60, message_t * msg){
#line 81
    CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(arg_0x2add08d7ed60, msg);
#line 81
}
#line 81
# 228 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 228
{
  CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 81 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 78 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint16_t CC2420CsmaP__Random__rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 243 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime)
#line 243
{
  CC2420TransmitP__myInitialBackoff = backoffTime + 1;
}

# 60 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420TransmitP__RadioBackoff__setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 220 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 220
{
  CC2420CsmaP__SubBackoff__setInitialBackoff(CC2420CsmaP__Random__rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestInitialBackoff(msg);
}

# 81 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 795 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__releaseSpiResource(void )
#line 795
{
  CC2420TransmitP__SpiResource__release();
  return SUCCESS;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__sendDone_task__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__sendDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 202 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err)
#line 202
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 203
    CC2420CsmaP__sendErr = err;
#line 203
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP__sendDone_task__postTask();
}

# 73 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error){
#line 73
  CC2420CsmaP__CC2420Transmit__sendDone(p_msg, error);
#line 73
}
#line 73
# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 29
}
#line 29
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 30
}
#line 30
# 452 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 453
{

  CC2420TransmitP__CSN__set();
  if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 457
      {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CSN__set();
      }
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
    }
  else {
#line 466
    if (!CC2420TransmitP__m_cca) {
        /* atomic removed: atomic calls only */
#line 467
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP__attemptSend();
      }
    else {
        CC2420TransmitP__releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 474
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_SAMPLE_CCA;
        }

        CC2420TransmitP__RadioBackoff__requestInitialBackoff(CC2420TransmitP__m_msg);
        CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myInitialBackoff);
      }
    }
}

# 663 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 663
{
}

# 373 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x2add086c8328, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x2add086c8328) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x2add086c8328, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 284 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg)
#line 285
{
}

# 88 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(am_id_t arg_0x2add08d7ed60, message_t * msg){
#line 88
    CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(arg_0x2add08d7ed60, msg);
#line 88
}
#line 88
# 233 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 233
{
  CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 88 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 251 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime)
#line 251
{
  CC2420TransmitP__myCongestionBackoff = backoffTime + 1;
}

# 66 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420TransmitP__RadioBackoff__setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 227 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 227
{
  CC2420CsmaP__SubBackoff__setCongestionBackoff(CC2420CsmaP__Random__rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestCongestionBackoff(msg);
}

# 88 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void )
#line 49
{
#line 49
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 144 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline bool HplAtm128Timer1P__Timer__test(void )
#line 144
{
  return HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag().bits.tov1;
}

# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = HplAtm128Timer1P__Timer__test();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 60 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 133 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__start(void )
#line 133
{
#line 133
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 4;
}

# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void ){
#line 56
  HplAtm128Timer1P__CompareA__start();
#line 56
}
#line 56
# 127 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__reset(void )
#line 127
{
#line 127
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 4;
}

# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void ){
#line 53
  HplAtm128Timer1P__CompareA__reset();
#line 53
}
#line 53
# 183 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__set(uint16_t t)
#line 183
{
#line 183
  * (volatile uint16_t *)(0x2A + 0x20) = t;
}

# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t){
#line 45
  HplAtm128Timer1P__CompareA__set(t);
#line 45
}
#line 45
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 74 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt)
#line 74
{
  /* atomic removed: atomic calls only */






  {
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size now;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size elapsed;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size expires;

    ;


    now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 93
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(expires - 1);
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start();
  }
}

# 92 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 92
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t HplCC2420InterruptsP__CCATask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HplCC2420InterruptsP__CCATask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 6)) != 0;
}

# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static bool HplCC2420InterruptsP__CC_CCA__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 89 "/opt/tinyos-2.1.1/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void )
#line 89
{
  /* atomic removed: atomic calls only */
#line 90
  HplCC2420InterruptsP__ccaWaitForState = TRUE;
  /* atomic removed: atomic calls only */
#line 91
  HplCC2420InterruptsP__ccaCheckDisabled = FALSE;
  HplCC2420InterruptsP__ccaLastState = HplCC2420InterruptsP__CC_CCA__get();
  HplCC2420InterruptsP__CCATask__postTask();
  return SUCCESS;
}

# 42 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplCC2420InterruptsP__CCA__enableRisingEdge();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 207 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 210
            FAIL;

            {
#line 210
              __nesc_atomic_end(__nesc_atomic); 
#line 210
              return __nesc_temp;
            }
          }
        }
#line 213
      CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
      CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP__InterruptCCA__enableRisingEdge();
      CC2420ControlP__SXOSCON__strobe();

      CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP__writeFsctrl();
      CC2420ControlP__writeMdmctrl0();

      CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    }
#line 233
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startOscillator(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 211 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__Resource__granted(void )
#line 211
{
  CC2420CsmaP__CC2420Power__startOscillator();
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 92
  CC2420CsmaP__Resource__granted();
#line 92
}
#line 92
# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 30
}
#line 30
# 390 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 390
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__Resource__granted();
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP__syncDone__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ControlP__syncDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 29
}
#line 29
# 45 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 376 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SyncResource__granted(void )
#line 376
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRFOFF__strobe();
  CC2420ControlP__writeFsctrl();
  CC2420ControlP__writeMdmctrl0();
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRXON__strobe();
  CC2420ControlP__CSN__set();
  CC2420ControlP__SyncResource__release();
  CC2420ControlP__syncDone__postTask();
}

#line 509
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data)
#line 509
{
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val){
#line 63
  CC2420ControlP__ReadRssi__default__readDone(result, val);
#line 63
}
#line 63
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__RssiResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 287 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 395 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__RssiResource__granted(void )
#line 395
{
  uint16_t data = 0;

#line 397
  CC2420ControlP__CSN__clr();
  CC2420ControlP__RSSI__read(&data);
  CC2420ControlP__CSN__set();

  CC2420ControlP__RssiResource__release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP__ReadRssi__readDone(SUCCESS, data);
}

# 414 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__SpiResource__granted(void )
#line 414
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 417
    {
      cur_state = CC2420TransmitP__m_state;
    }
#line 419
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP__S_LOAD: 
        CC2420TransmitP__loadTXFIFO();
      break;

      case CC2420TransmitP__S_BEGIN_TRANSMIT: 
        CC2420TransmitP__attemptSend();
      break;

      case CC2420TransmitP__S_CANCEL: 
        CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 435
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
        }
#line 437
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP__releaseSpiResource();
      break;
    }
}

# 508 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 508
{







  CC2420ReceiveP__receive();
}

# 367 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 367
{
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x2add086c9158){
#line 92
  switch (arg_0x2add086c9158) {
#line 92
    case /*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 92
      CC2420ControlP__SpiResource__granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID:
#line 92
      CC2420ControlP__SyncResource__granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID:
#line 92
      CC2420ControlP__RssiResource__granted();
#line 92
      break;
#line 92
    case /*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID:
#line 92
      CC2420TransmitP__SpiResource__granted();
#line 92
      break;
#line 92
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID:
#line 92
      CC2420ReceiveP__SpiResource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      CC2420SpiP__Resource__default__granted(arg_0x2add086c9158);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 358 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP__m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 63 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__PANID__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_PANID, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__startDone_task__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__startDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 215 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void )
#line 215
{
  CC2420CsmaP__startDone_task__postTask();
}

# 76 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 76
  CC2420CsmaP__CC2420Power__startOscillatorDone();
#line 76
}
#line 76
# 105 "/opt/tinyos-2.1.1/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP__CCA__disable(void )
#line 105
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    HplCC2420InterruptsP__ccaCheckDisabled = TRUE;
#line 106
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = HplCC2420InterruptsP__CCA__disable();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 418 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 418
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 57 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
inline static void HplCC2420InterruptsP__CCA__fired(void ){
#line 57
  CC2420ControlP__InterruptCCA__fired();
#line 57
}
#line 57
# 69 "/opt/tinyos-2.1.1/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline void HplCC2420InterruptsP__CCATask__runTask(void )
#line 69
{
  uint8_t CCAState;

#line 71
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 71
    {
      if (HplCC2420InterruptsP__ccaCheckDisabled) {
          {
#line 73
            __nesc_atomic_end(__nesc_atomic); 
#line 73
            return;
          }
        }
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }

  CCAState = HplCC2420InterruptsP__CC_CCA__get();
  if (HplCC2420InterruptsP__ccaLastState != HplCC2420InterruptsP__ccaWaitForState && CCAState == HplCC2420InterruptsP__ccaWaitForState) {
      HplCC2420InterruptsP__CCA__fired();
    }



  HplCC2420InterruptsP__ccaLastState = CCAState;
  HplCC2420InterruptsP__CCATask__postTask();
}

# 222 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error)
#line 222
{
}

# 704 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error)
#line 704
{
}

# 53 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
#line 53
  CC2420ReceiveP__CC2420Config__syncDone(error);
#line 53
  CC2420ActiveMessageP__CC2420Config__syncDone(error);
#line 53
}
#line 53
# 446 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__syncDone__runTask(void )
#line 446
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 447
    CC2420ControlP__m_sync_busy = FALSE;
#line 447
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 300 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Config__sync(void )
#line 300
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 301
    {
      if (CC2420ControlP__m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 303
            FAIL;

            {
#line 303
              __nesc_atomic_end(__nesc_atomic); 
#line 303
              return __nesc_temp;
            }
          }
        }
#line 306
      CC2420ControlP__m_sync_busy = TRUE;
      if (CC2420ControlP__m_state == CC2420ControlP__S_XOSC_STARTED) {
          CC2420ControlP__SyncResource__request();
        }
      else 
#line 309
        {
          CC2420ControlP__syncDone__postTask();
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 442
static inline void CC2420ControlP__sync__runTask(void )
#line 442
{
  CC2420ControlP__CC2420Config__sync();
}

# 213 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error)
#line 213
{
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__BareSend__sendDone(message_t * msg, error_t error){
#line 89
  CC2420TinyosNetworkP__BareSend__default__sendDone(msg, error);
#line 89
}
#line 89
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void CC2420ActiveMessageP__AMSend__sendDone(am_id_t arg_0x2add08d846c0, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x2add08d846c0, msg, error);
#line 99
}
#line 99
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420TinyosNetworkP__Resource__release(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 199 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result)
#line 199
{
  CC2420ActiveMessageP__RadioResource__release();
  CC2420ActiveMessageP__AMSend__sendDone(CC2420ActiveMessageP__AMPacket__type(msg), msg, result);
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__ActiveSend__sendDone(message_t * msg, error_t error){
#line 89
  CC2420ActiveMessageP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 118 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error)
#line 118
{
  if (CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg) == 0x3f) {
      CC2420TinyosNetworkP__ActiveSend__sendDone(msg, error);
    }
  else 
#line 121
    {
      CC2420TinyosNetworkP__BareSend__sendDone(msg, error);
    }
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void UniqueSendP__Send__sendDone(message_t * msg, error_t error){
#line 89
  CC2420TinyosNetworkP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 104 "/opt/tinyos-2.1.1/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP__State__toIdle();
  UniqueSendP__Send__sendDone(msg, error);
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void CC2420CsmaP__Send__sendDone(message_t * msg, error_t error){
#line 89
  UniqueSendP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__stopDone_task__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__stopDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 6;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set();
#line 29
}
#line 29
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 5);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr();
#line 30
}
#line 30
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr();
#line 30
}
#line 30
# 199 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void )
#line 199
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

# 63 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__stopVReg(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420ControlP__CC2420Power__stopVReg();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void )
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 6);
}

# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void ){
#line 40
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable();
#line 40
}
#line 40
# 33 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void )
#line 33
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
  return SUCCESS;
}

# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 171 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__stop(void )
#line 171
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__InterruptFIFOP__disable();
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 138 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__stop(void )
#line 138
{
#line 138
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 5);
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop(void ){
#line 61
  HplAtm128Timer1P__Capture__stop();
#line 61
}
#line 61
# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void )
#line 60
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop();
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
#line 55
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable();
#line 55
}
#line 55
# 179 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__stop(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffTimer__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__SpiResource__release();
      CC2420TransmitP__CSN__set();
    }
#line 186
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = CC2420TransmitP__StdControl__stop();
#line 84
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__stop());
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 272 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__shutdown(void )
#line 272
{
  CC2420CsmaP__SubControl__stop();
  CC2420CsmaP__CC2420Power__stopVReg();
  CC2420CsmaP__stopDone_task__postTask();
}

#line 241
static inline void CC2420CsmaP__sendDone_task__runTask(void )
#line 241
{
  error_t packetErr;

#line 243
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    packetErr = CC2420CsmaP__sendErr;
#line 243
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
      CC2420CsmaP__shutdown();
    }
  else {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
    }

  CC2420CsmaP__Send__sendDone(CC2420CsmaP__m_msg, packetErr);
}

# 49 "SendingC.nc"
static inline void SendingC__AMControl__stopDone(error_t err)
#line 49
{
}

# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__stopDone(error_t error){
#line 117
  SendingC__AMControl__stopDone(error);
#line 117
}
#line 117
# 262 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__stopDone_task__runTask(void )
#line 262
{
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPED);
  CC2420CsmaP__SplitControl__stopDone(SUCCESS);
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t SendingC__AMControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = CC2420CsmaP__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 143 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void SendingC__Timer0__startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 53
}
#line 53
# 40 "SendingC.nc"
static inline void SendingC__AMControl__startDone(error_t err)
#line 40
{
  if (err == SUCCESS) {
      SendingC__Timer0__startPeriodic(10);
    }
  else {
      SendingC__AMControl__start();
    }
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__startDone(error_t error){
#line 92
  SendingC__AMControl__startDone(error);
#line 92
}
#line 92
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 179 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__release(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420ControlP__CSN__set();
      {
        unsigned char __nesc_temp = 
#line 182
        CC2420ControlP__SpiResource__release();

        {
#line 182
          __nesc_atomic_end(__nesc_atomic); 
#line 182
          return __nesc_temp;
        }
      }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420ControlP__Resource__release();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 249 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 249
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 250
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 252
            FAIL;

            {
#line 252
              __nesc_atomic_end(__nesc_atomic); 
#line 252
              return __nesc_temp;
            }
          }
        }
#line 254
      CC2420ControlP__SRXON__strobe();
    }
#line 255
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__rxOn(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void )
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 6;
}

# 35 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void ){
#line 35
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable();
#line 35
}
#line 35
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t * )90U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t * )90U |= 1 << 4;
    }
  else {
#line 53
    * (volatile uint8_t * )90U &= ~(1 << 4);
    }
}

# 59 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high){
#line 59
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(low_to_high);
#line 59
}
#line 59
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void )
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 6;
}

# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void ){
#line 45
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear();
#line 45
}
#line 45
# 15 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(bool rising)
#line 15
{
  /* atomic removed: atomic calls only */
#line 16
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void )
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(FALSE);
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 157 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__start(void )
#line 157
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__receivingPacket = FALSE;




      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 52
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(TRUE);
}

# 42 "/opt/tinyos-2.1.1/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 168 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__start(void )
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
      CC2420TransmitP__abortSpiRelease = FALSE;
      CC2420TransmitP__m_tx_power = 0;
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = CC2420TransmitP__StdControl__start();
#line 74
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__start());
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 254 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__startDone_task__runTask(void )
#line 254
{
  CC2420CsmaP__SubControl__start();
  CC2420CsmaP__CC2420Power__rxOn();
  CC2420CsmaP__Resource__release();
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
  CC2420CsmaP__SplitControl__startDone(SUCCESS);
}

# 122 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__setEdge(bool up)
#line 122
{
#line 122
  if (up) {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) |= 1 << 6;
    }
  else {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) &= ~(1 << 6);
    }
}

# 79 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(bool up){
#line 79
  HplAtm128Timer1P__Capture__setEdge(up);
#line 79
}
#line 79
# 132 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__start(void )
#line 132
{
#line 132
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 5;
}

# 58 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start(void ){
#line 58
  HplAtm128Timer1P__Capture__start();
#line 58
}
#line 58
# 45 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
inline static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(1U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 55 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(dt);
#line 55
}
#line 55
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 5;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set();
#line 29
}
#line 29
# 187 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 190
            FAIL;

            {
#line 190
              __nesc_atomic_end(__nesc_atomic); 
#line 190
              return __nesc_temp;
            }
          }
        }
#line 192
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupTimer__start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startVReg(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 67 "SendingC.nc"
static inline void SendingC__AMSend__sendDone(message_t *bufPtr, error_t error)
#line 67
{
  __nesc_hton_uint16(SendingC__btrpkt->AX.data, 0);
  __nesc_hton_uint16(SendingC__btrpkt->AY.data, 0);
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  SendingC__AMSend__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 207 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x2add0819d318, message_t * msg, error_t error){
#line 89
  switch (arg_0x2add0819d318) {
#line 89
    case 0U:
#line 89
      /*SendingAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x2add0819d318, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 155
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 82 "/opt/tinyos-2.1.1/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 82
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 84
  myGroup = ActiveMessageAddressC__group;
  return myGroup;
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
#line 50
inline static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 5;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 6;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput();
#line 35
}
#line 35
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 35
}
#line 35
# 121 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 121
{
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();

  CC2420ControlP__m_short_addr = CC2420ControlP__ActiveMessageAddress__amAddress();
  CC2420ControlP__m_pan = CC2420ControlP__ActiveMessageAddress__amGroup();
  CC2420ControlP__m_tx_power = 31;
  CC2420ControlP__m_channel = 26;





  CC2420ControlP__addressRecognition = TRUE;





  CC2420ControlP__hwAddressRecognition = FALSE;






  CC2420ControlP__autoAckEnabled = TRUE;






  CC2420ControlP__hwAutoAckDefault = FALSE;



  return SUCCESS;
}

# 81 "/opt/tinyos-2.1.1/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 4U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 45 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 22 "/opt/tinyos-2.1.1/tos/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void )
#line 22
{
  return SUCCESS;
}

# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 33
}
#line 33


inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 6);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput();
#line 33
}
#line 33
# 160 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 160
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 151 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 151
{
  CC2420ReceiveP__m_p_rx_buf = &CC2420ReceiveP__m_rx_buf;
  return SUCCESS;
}

# 122 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 122
{
#line 122
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 56
  HplAtm128Timer0AsyncP__Compare__start();
#line 56
}
#line 56
# 76 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x)
#line 76
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 37 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 37
  HplAtm128Timer0AsyncP__TimerCtrl__setControl(control);
#line 37
}
#line 37
# 198 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 198
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 44 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP__Random__rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 62 "/opt/tinyos-2.1.1/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Init__init(void )
#line 62
{
  UniqueSendP__localSendId = UniqueSendP__Random__rand16();
  return SUCCESS;
}

# 71 "/opt/tinyos-2.1.1/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP__Init__init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP__receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP__receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 45 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void )
#line 45
{
  memset(/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 51
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

#line 51
static inline error_t /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__Init__init(void )
#line 51
{
  memset(/*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__resQ, 0, sizeof /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__resQ);
  return SUCCESS;
}

#line 51
static inline error_t /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__Init__init(void )
#line 51
{
  memset(/*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__resQ, 0, sizeof /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__resQ);
  return SUCCESS;
}

#line 51
static inline error_t /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__Init__init(void )
#line 51
{
  memset(/*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__resQ, 0, sizeof /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__resQ);
  return SUCCESS;
}

#line 51
static inline error_t /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__Init__init(void )
#line 51
{
  memset(/*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__resQ, 0, sizeof /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__resQ);
  return SUCCESS;
}

# 45 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void )
#line 45
{
  memset(/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__resQ, /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY, sizeof /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__resQ);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__Init__init(void )
#line 51
{
  memset(/*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__resQ, 0, sizeof /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__resQ);
  return SUCCESS;
}

#line 51
static inline error_t /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__Init__init(void )
#line 51
{
  memset(/*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__resQ, 0, sizeof /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__resQ);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*MagConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__6__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, /*MicDeviceP.Arbiter.Queue*/RoundRobinResourceQueueC__5__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*PhotoTempDeviceC.TempArbiter.Queue*/RoundRobinResourceQueueC__4__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*PhotoTempDeviceC.PhotoArbiter.Queue*/RoundRobinResourceQueueC__3__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, UniqueReceiveP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, UniqueSendP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, NoInitC__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 36 "SendingC.nc"
static inline void SendingC__Boot__booted(void )
#line 36
{
  SendingC__AMControl__start();
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 49
  SendingC__Boot__booted();
#line 49
}
#line 49
# 155 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void )
#line 155
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 170
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HplAtm128Timer0AsyncP__McuPowerOverride__lowestState();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 66
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 134 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 97
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 102
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 102
    uint8_t __result;

#line 102
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 104
   __asm volatile ("sei" :  :  : "memory");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli" :  :  : "memory");}

# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 59
  McuSleepC__McuSleep__sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 72
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 138
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 61
  SchedulerBasicP__Scheduler__taskLoop();
#line 61
}
#line 61
# 140 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void )
#line 140
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 71
}
#line 71
# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 82
{
   __asm volatile ("sei" :  :  : "memory");}

# 132 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 132
{
#line 132
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 149 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 49
}
#line 49
# 230 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer__overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 61
}
#line 61
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 171 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 171
{
  return CC2420ControlP__SpiResource__request();
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ControlP__Resource__request();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 207 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startVRegDone(void )
#line 207
{
  CC2420CsmaP__Resource__request();
}

# 56 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 56
  CC2420CsmaP__CC2420Power__startVRegDone();
#line 56
}
#line 56
# 408 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__StartupTimer__fired(void )
#line 408
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__CCA__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 496 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__BackoffTimer__fired(void )
#line 496
{
  /* atomic removed: atomic calls only */
#line 497
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SAMPLE_CCA: 


          if (CC2420TransmitP__CCA__get()) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP__congestionBackoff();
            }
        break;

        case CC2420TransmitP__S_BEGIN_TRANSMIT: 
          case CC2420TransmitP__S_CANCEL: 
            if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
                CC2420TransmitP__attemptSend();
              }
        break;

        case CC2420TransmitP__S_ACK_WAIT: 
          CC2420TransmitP__signalDone(SUCCESS);
        break;

        case CC2420TransmitP__S_SFD: 


          CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CaptureSFD__captureRisingEdge();
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void ){
#line 67
  CC2420TransmitP__BackoffTimer__fired();
#line 67
  CC2420ControlP__StartupTimer__fired();
#line 67
}
#line 67
# 151 "/opt/tinyos-2.1.1/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt == 0) 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired();
        }
      else 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void ){
#line 67
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired();
#line 67
}
#line 67
# 110 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void )
#line 110
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired();
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareA__fired(void ){
#line 49
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired();
#line 49
}
#line 49
# 198 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareB__default__fired(void )
#line 198
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareB__fired(void ){
#line 49
  HplAtm128Timer1P__CompareB__default__fired();
#line 49
}
#line 49
# 202 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareC__default__fired(void )
#line 202
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareC__fired(void ){
#line 49
  HplAtm128Timer1P__CompareC__default__fired();
#line 49
}
#line 49
# 294 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 59 "/opt/tinyos-2.1.1/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__clear(message_t * msg){
#line 59
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 59
}
#line 59
# 195 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
#line 195
{
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

# 55 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
#line 55
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
#line 55
}
#line 55
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 4)) != 0;
}

# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__SFD__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 186 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
#line 186
{
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % 
      CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

#line 190
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

# 49 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
#line 49
  CC2420ReceiveP__CC2420Receive__sfd(time);
#line 49
}
#line 49
# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void )
#line 56
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(FALSE);
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 63 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 185 "/opt/tinyos-2.1.1/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(msg)->length.data)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 47 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(message_t * msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__get(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 176 "/opt/tinyos-2.1.1/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.data);
}

# 39 "/opt/tinyos-2.1.1/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(message_t * msg){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__isSet(msg);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 67 "/opt/tinyos-2.1.1/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__set(message_t * msg, CC2420TransmitP__PacketTimeStamp__size_type value){
#line 67
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 67
}
#line 67
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 259 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP__getTime32(uint16_t time)
{
  uint32_t recent_time = CC2420TransmitP__BackoffTimer__getNow();

#line 262
  return recent_time + (int16_t )(time - recent_time);
}

#line 278
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 278
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;
#line 279
  uint32_t time32;
  uint8_t sfd_state = 0;

#line 281
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 281
    {
      time32 = CC2420TransmitP__getTime32(time);
      switch (CC2420TransmitP__m_state) {

          case CC2420TransmitP__S_SFD: 
            CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
          CC2420TransmitP__sfdHigh = TRUE;


          CC2420TransmitP__m_receiving = FALSE;
          CC2420TransmitP__CaptureSFD__captureFallingEdge();
          CC2420TransmitP__PacketTimeStamp__set(CC2420TransmitP__m_msg, time32);
          if (CC2420TransmitP__PacketTimeSyncOffset__isSet(CC2420TransmitP__m_msg)) {
              uint8_t absOffset = sizeof(message_header_t ) - sizeof(cc2420_header_t ) + CC2420TransmitP__PacketTimeSyncOffset__get(CC2420TransmitP__m_msg);
              timesync_radio_t *timesync = (timesync_radio_t *)((nx_uint8_t *)CC2420TransmitP__m_msg + absOffset);

              (__nesc_temp44 = (*timesync).data, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
              CC2420TransmitP__CSN__clr();
              CC2420TransmitP__TXFIFO_RAM__write(absOffset, (uint8_t *)timesync, sizeof(timesync_radio_t ));
              CC2420TransmitP__CSN__set();

              (__nesc_temp45 = (*timesync).data, __nesc_hton_uint32(__nesc_temp45, __nesc_ntoh_uint32(__nesc_temp45) + time32));
            }

          if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ)) {

              CC2420TransmitP__abortSpiRelease = TRUE;
            }
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__BackoffTimer__stop();

          if (CC2420TransmitP__SFD__get()) {
              break;
            }


          case CC2420TransmitP__S_EFD: 
            CC2420TransmitP__sfdHigh = FALSE;
          CC2420TransmitP__CaptureSFD__captureRisingEdge();

          if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ)) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_ACK_WAIT_DELAY);
            }
          else 
#line 324
            {
              CC2420TransmitP__signalDone(SUCCESS);
            }

          if (!CC2420TransmitP__SFD__get()) {
              break;
            }


          default: 

            if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
                CC2420TransmitP__sfdHigh = TRUE;
                CC2420TransmitP__CaptureSFD__captureFallingEdge();

                sfd_state = CC2420TransmitP__SFD__get();
                CC2420TransmitP__CC2420Receive__sfd(time32);
                CC2420TransmitP__m_receiving = TRUE;
                CC2420TransmitP__m_prev_time = time;
                if (CC2420TransmitP__SFD__get()) {
                    {
                      __nesc_atomic_end(__nesc_atomic); 
#line 345
                      return;
                    }
                  }
              }


          if (CC2420TransmitP__sfdHigh == TRUE) {
              CC2420TransmitP__sfdHigh = FALSE;
              CC2420TransmitP__CaptureSFD__captureRisingEdge();
              CC2420TransmitP__m_receiving = FALSE;








              if (sfd_state == 0 && time - CC2420TransmitP__m_prev_time < 10) {
                  CC2420TransmitP__CC2420Receive__sfd_dropped();
                  if (CC2420TransmitP__m_msg) {
                    CC2420TransmitP__PacketTimeStamp__clear(CC2420TransmitP__m_msg);
                    }
                }
#line 368
              break;
            }
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }
}

# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(uint16_t time){
#line 50
  CC2420TransmitP__CaptureSFD__captured(time);
#line 50
}
#line 50
# 126 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__reset(void )
#line 126
{
#line 126
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 5;
}

# 55 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset(void ){
#line 55
  HplAtm128Timer1P__Capture__reset();
#line 55
}
#line 55
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(uint16_t time)
#line 64
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset();
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(time);
}

# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t){
#line 51
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(t);
#line 51
}
#line 51
# 117 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void )
#line 117
{
}

# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 51
{
}

# 166 "/opt/tinyos-2.1.1/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 71
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 71
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 71
  /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer1P__Timer__overflow(void ){
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 61
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow();
#line 61
}
#line 61
# 63 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired();
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig0__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired();
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig1__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired();
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig2__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired();
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig3__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired();
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig4__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired();
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig5__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired();
#line 41
}
#line 41
# 212 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 212
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {

      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
      CC2420ReceiveP__beginReceive();
    }
  else 



    {
      CC2420ReceiveP__m_missed_packets++;
    }
}

# 57 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired(void ){
#line 57
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 57
}
#line 57
# 38 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void )
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired();
}

# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void ){
#line 64
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired();
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig6__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired();
#line 41
}
#line 41
# 137 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline error_t MicP__MicSetting__default__toneDetected(void )
{
  return SUCCESS;
}

# 88 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicSetting.nc"
inline static error_t MicP__MicSetting__toneDetected(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = MicP__MicSetting__default__toneDetected();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 142 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline void MicP__AlertInterrupt__fired(void )
{
  MicP__MicSetting__toneDetected();
}

# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void ){
#line 64
  MicP__AlertInterrupt__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired();
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig7__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired();
#line 41
}
#line 41
# 98 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 98
{
#line 98
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 80 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = HplAtm128SpiP__SPI__read();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
#line 96
inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 96
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 96
}
#line 96
# 299 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 299
{
  bool again;

  /* atomic removed: atomic calls only */
#line 302
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 324
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 92 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 92
  Atm128SpiP__Spi__dataReady(data);
#line 92
}
#line 92
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void )
#line 46
{
  return * (volatile uint16_t *)(0x04 + 0x20);
}

#line 43
static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void )
#line 43
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)(0x06 + 0x20);
}

#line 108
static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void )
#line 108
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP__HplAtm128Adc__getAdcsra();
#line 112
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 129
      oldSr.adif || oldSr.adsc;

#line 129
      return __nesc_temp;
    }
  }
}

# 141 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP__HplAtm128Adc__cancel(void ){
#line 141
  unsigned char __nesc_result;
#line 141

#line 141
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__cancel();
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 242 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 243
{
  return FALSE;
}

# 110 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = Atm128AdcP__Atm128AdcMultiple__default__dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 150 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x2add08fd06d8, error_t result, AdcP__ReadNow__val_t val){
#line 66
    AdcP__ReadNow__default__readDone(arg_0x2add08fd06d8, result, val);
#line 66
}
#line 66
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP__acquiredData__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcP__acquiredData);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 108 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise)
#line 108
{
  switch (AdcP__state) 
    {
      case AdcP__ACQUIRE_DATA: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__val = data;
            AdcP__acquiredData__postTask();
          }
      break;

      case AdcP__ACQUIRE_DATA_NOW: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__state = AdcP__IDLE;
            AdcP__ReadNow__readDone(AdcP__client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 72 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise){
#line 72
  AdcP__Atm128AdcSingle__dataReady(data, precise);
#line 72
}
#line 72
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void )
#line 78
{
#line 78
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 3);
}

# 86 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableInterruption(void ){
#line 86
  HplAtm128AdcP__HplAtm128Adc__disableInterruption();
#line 86
}
#line 86
# 124 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data)
#line 124
{
  bool precise;
#line 125
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP__f.channel;
      precise = Atm128AdcP__f.precise;
      multiple = Atm128AdcP__f.multiple;
    }
#line 133
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP__HplAtm128Adc__disableInterruption();
      Atm128AdcP__Atm128AdcSingle__dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 152
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP__HplAtm128Adc__getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 160
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP__Atm128AdcMultiple__dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP__HplAtm128Adc__setAdmux(admux);

            Atm128AdcP__f = Atm128AdcP__nextF;
            Atm128AdcP__nextF.channel = nextChannel;
            Atm128AdcP__nextF.precise = Atm128AdcP__isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP__HplAtm128Adc__cancel();
          }
#line 180
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 147 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data){
#line 147
  Atm128AdcP__HplAtm128Adc__dataReady(data);
#line 147
}
#line 147
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__release(uint8_t arg_0x2add09209460){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Resource__release(arg_0x2add09209460);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2C.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Atm128I2C__stop(void ){
#line 46
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__Atm128I2C__stop();
#line 46
}
#line 46
# 72 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__release(uint8_t id)
#line 72
{
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Atm128I2C__stop();
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__release(id);
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t MicP__I2CResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__release(/*MicDeviceP.I2CPot*/Atm128I2CMasterC__0__CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 175 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline void MicP__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
{
  MicP__I2CResource__release();
}

# 107 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__writeDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 107
{
}

# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__writeDone(uint8_t arg_0x2add091b4478, error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 101
  switch (arg_0x2add091b4478) {
#line 101
    case /*MicDeviceP.I2CPot*/Atm128I2CMasterC__0__CLIENT_ID:
#line 101
      MicP__I2CPacket__writeDone(error, addr, length, data);
#line 101
      break;
#line 101
    case /*MagConfigP.I2CPot*/Atm128I2CMasterC__1__CLIENT_ID:
#line 101
      MagP__I2CPacket__writeDone(error, addr, length, data);
#line 101
      break;
#line 101
    default:
#line 101
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__writeDone(arg_0x2add091b4478, error, addr, length, data);
#line 101
      break;
#line 101
    }
#line 101
}
#line 101
# 102 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__writeDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 102
{
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__writeDone(/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__currentClient, error, addr, len, data);
}

# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 101
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__writeDone(error, addr, length, data);
#line 101
}
#line 101
# 171 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static inline void MicP__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
{
}

# 73 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static inline void MagP__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
{
  return;
}

# 108 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__readDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 108
{
}

# 91 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__readDone(uint8_t arg_0x2add091b4478, error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 91
  switch (arg_0x2add091b4478) {
#line 91
    case /*MicDeviceP.I2CPot*/Atm128I2CMasterC__0__CLIENT_ID:
#line 91
      MicP__I2CPacket__readDone(error, addr, length, data);
#line 91
      break;
#line 91
    case /*MagConfigP.I2CPot*/Atm128I2CMasterC__1__CLIENT_ID:
#line 91
      MagP__I2CPacket__readDone(error, addr, length, data);
#line 91
      break;
#line 91
    default:
#line 91
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__readDone(arg_0x2add091b4478, error, addr, length, data);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 99 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__readDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 99
{
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__readDone(/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__currentClient, error, addr, len, data);
}

# 91 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 91
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__readDone(error, addr, length, data);
#line 91
}
#line 91
# 105 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__i2c_abort(error_t err)
#line 105
{
  /* atomic removed: atomic calls only */
#line 106
  {

    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(FALSE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(TRUE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE;
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading) {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__readDone(err, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr);
      }
    else {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__writeDone(err, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr);
      }
  }
}

# 75 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline uint8_t HplAtm128I2CBusP__I2C__status(void )
#line 75
{
  return * (volatile uint8_t *)0x71 & 0xf8;
}

# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__status(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = HplAtm128I2CBusP__I2C__status();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 50 "/opt/tinyos-2.1.1/tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led2On(void )
#line 50
{
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led2On(void ){
#line 78
  NoLedsC__Leds__led2On();
#line 78
}
#line 78
# 46 "/opt/tinyos-2.1.1/tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led1On(void )
#line 46
{
}

# 61 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led1On(void ){
#line 61
  NoLedsC__Leds__led1On();
#line 61
}
#line 61
# 117 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline uint8_t HplAtm128I2CBusP__I2C__read(void )
#line 117
{
  return * (volatile uint8_t *)0x73;
}

# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__read(void ){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = HplAtm128I2CBusP__I2C__read();
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 286 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__commandComplete(void )
#line 286
{
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
  /* atomic removed: atomic calls only */
#line 288
  {
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_SLAVE_ACK) {
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading == TRUE) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_DATA;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(TRUE);
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(TRUE);
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
          }
      }
    else {
#line 296
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_DATA) {

          if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading == TRUE) {
              if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index < /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen) {
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index] = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__read();
                  if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen - 1 && 
                  !(/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags & I2C_ACK_END)) {
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(FALSE);
                    }
                }
              else 
                {
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
                  if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags & I2C_STOP) {
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags &= ~I2C_STOP;
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(TRUE);
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__status();
                    }
                  else {
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(FALSE);
                    }

                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE;
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__readDone(SUCCESS, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr);
                  return;
                }
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index++;
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
              return;
            }
          else {
              if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index < /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen) {
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index]);
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index++;
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
                }
              else {
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
                  if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags & I2C_STOP) {
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags &= ~I2C_STOP;
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(TRUE);
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led1On();
                    }
                  else {
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(FALSE);
                    }
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE;
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led2On();
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__writeDone(SUCCESS, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr);
                  return;
                }
            }
        }
      else {
#line 351
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_STARTING) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags &= ~I2C_START;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStart(FALSE);
            if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__status() != ATM128_I2C_START && 
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__status() != ATM128_I2C_RSTART) {
                if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading) {
                  }


                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__i2c_abort(FAIL);
                return;
              }
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_ADDR;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(TRUE);
          }
        }
      }
#line 366
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_ADDR) {
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading == TRUE) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(((/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr & 0x7f) << 1) | 0x01);
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_SLAVE_ACK;
          }
        else 
          {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(((/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr & 0x7f) << 1) | 0x00);
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_DATA;
          }

        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
      }
  }
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void HplAtm128I2CBusP__I2C__commandComplete(void ){
#line 49
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__commandComplete();
#line 49
}
#line 49
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t MagP__I2CResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__release(/*MagConfigP.I2CPot*/Atm128I2CMasterC__1__CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 50 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 51
  {
    unsigned char __nesc_temp = 
#line 51
    /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 51
    return __nesc_temp;
  }
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 58 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qHead != /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
        uint8_t id = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qHead;

#line 62
        /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qHead];
        if (/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
          }
#line 65
        /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[id] = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 215 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__default__unconfigure(uint8_t id)
#line 215
{
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__unconfigure(uint8_t arg_0x2add08f48538){
#line 55
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__default__unconfigure(arg_0x2add08f48538);
#line 55
}
#line 55
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )50U &= ~(1 << 1);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CData__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__clr();
#line 30
}
#line 30
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )50U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CClk__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP__24__IO__clr();
#line 30
}
#line 30
# 70 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__off(void )
#line 70
{
  HplAtm128I2CBusP__I2CClk__clr();
  HplAtm128I2CBusP__I2CData__clr();
}

# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__off(void ){
#line 43
  HplAtm128I2CBusP__I2C__off();
#line 43
}
#line 43
# 142 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__stop(void )
#line 142
{
  /* atomic removed: atomic calls only */
#line 143
  {
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE) {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(FALSE);
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(FALSE);
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__off();
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_OFF;
        {
          unsigned char __nesc_temp = 
#line 152
          SUCCESS;

#line 152
          return __nesc_temp;
        }
      }
    else 
#line 154
      {
        {
          unsigned char __nesc_temp = 
#line 155
          FAIL;

#line 155
          return __nesc_temp;
        }
      }
  }
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 74 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 74
{
}

# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 52
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 52
}
#line 52
# 69 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 69
{
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 116 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static inline error_t MagP__Mag__default__gainAdjustXDone(bool result)
{
  return result;
}

# 65 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/Mag.nc"
inline static error_t MagP__Mag__gainAdjustXDone(bool result){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = MagP__Mag__default__gainAdjustXDone(result);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 120 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static inline error_t MagP__Mag__default__gainAdjustYDone(bool result)
{
  return result;
}

# 70 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/Mag.nc"
inline static error_t MagP__Mag__gainAdjustYDone(bool result){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = MagP__Mag__default__gainAdjustYDone(result);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 52 "/opt/tinyos-2.1.1/tos/system/RealMainP.nc"
  int main(void )
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 123 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 164
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2add07ea1960){
#line 64
  switch (arg_0x2add07ea1960) {
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP__startDone_task:
#line 64
      CC2420CsmaP__startDone_task__runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP__stopDone_task:
#line 64
      CC2420CsmaP__stopDone_task__runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP__sendDone_task:
#line 64
      CC2420CsmaP__sendDone_task__runTask();
#line 64
      break;
#line 64
    case CC2420ControlP__sync:
#line 64
      CC2420ControlP__sync__runTask();
#line 64
      break;
#line 64
    case CC2420ControlP__syncDone:
#line 64
      CC2420ControlP__syncDone__runTask();
#line 64
      break;
#line 64
    case HplCC2420InterruptsP__CCATask:
#line 64
      HplCC2420InterruptsP__CCATask__runTask();
#line 64
      break;
#line 64
    case CC2420SpiP__grant:
#line 64
      CC2420SpiP__grant__runTask();
#line 64
      break;
#line 64
    case Atm128SpiP__zeroTask:
#line 64
      Atm128SpiP__zeroTask__runTask();
#line 64
      break;
#line 64
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 64
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 64
      break;
#line 64
    case CC2420ReceiveP__receiveDone_task:
#line 64
      CC2420ReceiveP__receiveDone_task__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 64
      break;
#line 64
    case CC2420TinyosNetworkP__grantTask:
#line 64
      CC2420TinyosNetworkP__grantTask__runTask();
#line 64
      break;
#line 64
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 64
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 64
      break;
#line 64
    case AdcP__acquiredData:
#line 64
      AdcP__acquiredData__runTask();
#line 64
      break;
#line 64
    case AccelP__stopDone:
#line 64
      AccelP__stopDone__runTask();
#line 64
      break;
#line 64
    case /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__grantedTask:
#line 64
      /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__grantedTask__runTask();
#line 64
      break;
#line 64
    case /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask:
#line 64
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__startTask__runTask();
#line 64
      break;
#line 64
    case /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask:
#line 64
      /*AccelConfigP.PowerManager.PowerManager*/PowerManagerP__0__stopTask__runTask();
#line 64
      break;
#line 64
    case /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__grantedTask:
#line 64
      /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__grantedTask__runTask();
#line 64
      break;
#line 64
    case /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__grantedTask:
#line 64
      /*PhotoTempDeviceC.PhotoArbiter.Arbiter*/ArbiterP__3__grantedTask__runTask();
#line 64
      break;
#line 64
    case /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__grantedTask:
#line 64
      /*PhotoTempDeviceC.TempArbiter.Arbiter*/ArbiterP__4__grantedTask__runTask();
#line 64
      break;
#line 64
    case /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__startTask:
#line 64
      /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__startTask__runTask();
#line 64
      break;
#line 64
    case /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopTask:
#line 64
      /*PhotoTempDeviceC.PhotoPower.PowerManager*/PowerManagerP__1__stopTask__runTask();
#line 64
      break;
#line 64
    case /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__startTask:
#line 64
      /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__startTask__runTask();
#line 64
      break;
#line 64
    case /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopTask:
#line 64
      /*PhotoTempDeviceC.TempPower.PowerManager*/PowerManagerP__2__stopTask__runTask();
#line 64
      break;
#line 64
    case /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__stopDone:
#line 64
      /*PhotoTempDeviceC.PhotoControl*/PhotoTempControlP__0__stopDone__runTask();
#line 64
      break;
#line 64
    case /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__stopDone:
#line 64
      /*PhotoTempDeviceC.TempControl*/PhotoTempControlP__1__stopDone__runTask();
#line 64
      break;
#line 64
    case /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__grantedTask:
#line 64
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__grantedTask__runTask();
#line 64
      break;
#line 64
    case /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__grantedTask:
#line 64
      /*MicDeviceP.Arbiter.Arbiter*/ArbiterP__6__grantedTask__runTask();
#line 64
      break;
#line 64
    case /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__startTask:
#line 64
      /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__startTask__runTask();
#line 64
      break;
#line 64
    case /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopTask:
#line 64
      /*MicDeviceP.PowerManager.PowerManager*/PowerManagerP__3__stopTask__runTask();
#line 64
      break;
#line 64
    case /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__grantedTask:
#line 64
      /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__grantedTask__runTask();
#line 64
      break;
#line 64
    case /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__startTask:
#line 64
      /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__startTask__runTask();
#line 64
      break;
#line 64
    case /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopTask:
#line 64
      /*MagConfigP.PowerManager.PowerManager*/PowerManagerP__4__stopTask__runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2add07ea1960);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 24 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static error_t MagP__SplitControl__start(void )
{
  MagP__MagPower__makeOutput();
  MagP__MagPower__set();

  MagP__Timer__startOneShot(100);
  return SUCCESS;
}

# 133 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 159 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 161 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 44 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client)
#line 44
{
  return FAIL;
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(uint8_t arg_0x2add08ff8e30){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  switch (arg_0x2add08ff8e30) {
#line 78
    case /*SendingAppC.SensorMts300C.VoltageC.AdcReadClientC*/AdcReadClientC__1__ID:
#line 78
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SendingAppC.SensorMts300C.VoltageC.AdcReadClientC*/AdcReadClientC__1__HAL_ID);
#line 78
      break;
#line 78
    case /*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2__ID:
#line 78
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SendingAppC.SensorMts300C.AccelXC.AdcX*/AdcReadClientC__2__HAL_ID);
#line 78
      break;
#line 78
    case /*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3__ID:
#line 78
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SendingAppC.SensorMts300C.AccelYC.AdcY*/AdcReadClientC__3__HAL_ID);
#line 78
      break;
#line 78
    case /*PhotoTempDeviceC.Adc*/AdcReadClientC__0__ID:
#line 78
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*PhotoTempDeviceC.Adc*/AdcReadClientC__0__HAL_ID);
#line 78
      break;
#line 78
    case /*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4__ID:
#line 78
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SendingAppC.SensorMts300C.MicC.AdcReadClientC*/AdcReadClientC__4__HAL_ID);
#line 78
      break;
#line 78
    case /*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5__ID:
#line 78
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SendingAppC.SensorMts300C.MagXC.AdcX*/AdcReadClientC__5__HAL_ID);
#line 78
      break;
#line 78
    case /*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6__ID:
#line 78
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SendingAppC.SensorMts300C.MagYC.AdcY*/AdcReadClientC__6__HAL_ID);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(arg_0x2add08ff8e30);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 77 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

          {
#line 84
            __nesc_atomic_end(__nesc_atomic); 
#line 84
            return __nesc_temp;
          }
        }
    }
#line 87
    __nesc_atomic_end(__nesc_atomic); }
#line 86
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 65 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 65
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 51 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MicP.nc"
static error_t MicP__SplitControl__start(void )
{
  MicP__AlertInterrupt__disable();
  MicP__MicPower__makeOutput();
  MicP__MicPower__set();
  MicP__MicMuxSel__makeOutput();
  MicP__MicMuxSel__clr();

  MicP__MicSetting__muxSel(1);
  MicP__MicSetting__gainAdjust(64);

  MicP__Timer__startOneShot(1200);
  return SUCCESS;
}

# 83 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static void HplAtm128I2CBusP__I2C__readCurrent(void )
#line 83
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 84
    HplAtm128I2CBusP__current = * (volatile uint8_t *)0x74;
#line 84
    __nesc_atomic_end(__nesc_atomic); }
}

# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__write(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 81
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 82
    {
      if (/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__currentClient != id) {
          {
            unsigned char __nesc_temp = 
#line 84
            FAIL;

            {
#line 84
              __nesc_atomic_end(__nesc_atomic); 
#line 84
              return __nesc_temp;
            }
          }
        }
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }
#line 87
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__write(flags, addr, len, data);
}

# 108 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__state == /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__RES_BUSY && /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__resId == id) {
          if (/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Queue__isEmpty() == FALSE) {
              /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__reqResId = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Queue__dequeue();
              /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__resId = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__NO_RES;
              /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__state = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__RES_GRANTING;
              /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__grantedTask__postTask();
              /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(id);
            }
          else {
              /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__resId = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__default_owner_id;
              /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__state = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__RES_CONTROLLED;
              /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(id);
              /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 124
            SUCCESS;

            {
#line 124
              __nesc_atomic_end(__nesc_atomic); 
#line 124
              return __nesc_temp;
            }
          }
        }
    }
#line 128
    __nesc_atomic_end(__nesc_atomic); }
#line 127
  return FAIL;
}

# 65 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static bool /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 65
{
  return /*PhotoTempDeviceC.SharingArbiter.Queue*/RoundRobinResourceQueueC__2__resQ[id / 8] & (1 << id % 8);
}

# 77 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static error_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__request(uint8_t id)
#line 77
{
  /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceRequested__requested(/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__state == /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__RES_CONTROLLED) {
          /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__state = /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__RES_GRANTING;
          /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Queue__enqueue(id);

          {
#line 84
            __nesc_atomic_end(__nesc_atomic); 
#line 84
            return __nesc_temp;
          }
        }
    }
#line 87
    __nesc_atomic_end(__nesc_atomic); }
#line 86
  /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 54 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/AccelP.nc"
static error_t AccelP__SplitControl__start(void )
#line 54
{
  AccelP__AccelPin__makeOutput();
  AccelP__AccelPin__set();


  AccelP__Timer__startOneShot(17);
  return SUCCESS;
}

# 108 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 124
            SUCCESS;

            {
#line 124
              __nesc_atomic_end(__nesc_atomic); 
#line 124
              return __nesc_temp;
            }
          }
        }
    }
#line 128
    __nesc_atomic_end(__nesc_atomic); }
#line 127
  return FAIL;
}

#line 108
static error_t /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Resource__release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__state == /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__RES_BUSY && /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__resId == id) {
          if (/*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Queue__isEmpty() == FALSE) {
              /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__reqResId = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__Queue__dequeue();
              /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__resId = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__NO_RES;
              /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__state = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__RES_GRANTING;
              /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__grantedTask__postTask();
              /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__unconfigure(id);
            }
          else {
              /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__resId = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__default_owner_id;
              /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__state = /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__RES_CONTROLLED;
              /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceConfigure__unconfigure(id);
              /*MagConfigP.Arbiter.Arbiter*/ArbiterP__7__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 124
            SUCCESS;

            {
#line 124
              __nesc_atomic_end(__nesc_atomic); 
#line 124
              return __nesc_temp;
            }
          }
        }
    }
#line 128
    __nesc_atomic_end(__nesc_atomic); }
#line 127
  return FAIL;
}

#line 174
static uint8_t /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__Resource__isOwner(uint8_t id)
#line 174
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 175
    {
      if (/*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__resId == id && /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__state == /*PhotoTempDeviceC.SharingArbiter.Arbiter*/ArbiterP__2__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 176
          TRUE;

          {
#line 176
            __nesc_atomic_end(__nesc_atomic); 
#line 176
            return __nesc_temp;
          }
        }
      else 
#line 177
        {
          unsigned char __nesc_temp = 
#line 177
          FALSE;

          {
#line 177
            __nesc_atomic_end(__nesc_atomic); 
#line 177
            return __nesc_temp;
          }
        }
    }
#line 180
    __nesc_atomic_end(__nesc_atomic); }
}

#line 108
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_BUSY && /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__resId == id) {
          if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Queue__isEmpty() == FALSE) {
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__reqResId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Queue__dequeue();
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__resId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__NO_RES;
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_GRANTING;
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__grantedTask__postTask();
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
            }
          else {
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__resId = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__default_owner_id;
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED;
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
              /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 124
            SUCCESS;

            {
#line 124
              __nesc_atomic_end(__nesc_atomic); 
#line 124
              return __nesc_temp;
            }
          }
        }
    }
#line 128
    __nesc_atomic_end(__nesc_atomic); }
#line 127
  return FAIL;
}

# 65 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static bool /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 65
{
  return /*AccelConfigP.Arbiter.Queue*/RoundRobinResourceQueueC__1__resQ[id / 8] & (1 << id % 8);
}

# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static void AdcP__sample(void )
#line 82
{
  AdcP__Atm128AdcSingle__getData(AdcP__channel(), AdcP__refVoltage(), FALSE, AdcP__prescaler());
}

# 50 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 50
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 51
    {
      unsigned char __nesc_temp = 
#line 51
      /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

      {
#line 51
        __nesc_atomic_end(__nesc_atomic); 
#line 51
        return __nesc_temp;
      }
    }
#line 53
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void )
#line 65
{
  uint8_t rc;
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(CC2420ActiveMessageP__pending_message);

  CC2420ActiveMessageP__SendNotifier__aboutToSend(__nesc_ntoh_leuint8(header->type.data), __nesc_ntoh_leuint16(header->dest.data), CC2420ActiveMessageP__pending_message);
  rc = CC2420ActiveMessageP__SubSend__send(CC2420ActiveMessageP__pending_message, CC2420ActiveMessageP__pending_length);
  if (rc != SUCCESS) {
      CC2420ActiveMessageP__RadioResource__release();
      CC2420ActiveMessageP__AMSend__sendDone(__nesc_ntoh_leuint8(header->type.data), CC2420ActiveMessageP__pending_message, rc);
    }
}

# 106 "/opt/tinyos-2.1.1/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId)
#line 106
{

  __nesc_hton_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->network.data, networkId);
}

# 75 "/opt/tinyos-2.1.1/tos/chips/cc2420/unique/UniqueSendP.nc"
static error_t UniqueSendP__Send__send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP__State__requestState(UniqueSendP__S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP__CC2420PacketBody__getHeader(msg)->dsn.data, UniqueSendP__localSendId++);

      if ((error = UniqueSendP__SubSend__send(msg, len)) != SUCCESS) {
          UniqueSendP__State__toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 96 "/opt/tinyos-2.1.1/tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
          StateImplP__state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

#line 133
static bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP__state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 787 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP__acquireSpiResource(void )
#line 787
{
  error_t error = CC2420TransmitP__SpiResource__immediateRequest();

#line 789
  if (error != SUCCESS) {
      CC2420TransmitP__SpiResource__request();
    }
  return error;
}

# 126 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 148 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
static uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id)
#line 148
{
  /* atomic removed: atomic calls only */
#line 149
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 150
        TRUE;

#line 150
        return __nesc_temp;
      }
    else 
#line 151
      {
        unsigned char __nesc_temp = 
#line 151
        FALSE;

#line 151
        return __nesc_temp;
      }
  }
}

# 106 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void )
#line 106
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 108
  {
    Atm128SpiP__Spi__initMaster();
    Atm128SpiP__Spi__enableInterrupt(FALSE);
    Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
    Atm128SpiP__Spi__setClockPolarity(FALSE);
    Atm128SpiP__Spi__setClockPhase(FALSE);
    Atm128SpiP__Spi__setClock(0);
    Atm128SpiP__Spi__enableSpi(TRUE);
  }
  Atm128SpiP__McuPowerState__update();
}

# 130 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 130
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

#line 115
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 115
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
}

# 107 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 124 "/opt/tinyos-2.1.1/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void )
#line 124
{
  /* atomic removed: atomic calls only */
#line 125
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 127
        FALSE;

#line 127
        return __nesc_temp;
      }
  }
#line 129
  return TRUE;
}

# 817 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__loadTXFIFO(void )
#line 817
{
  cc2420_header_t *header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg)->tx_power.data);

  if (!tx_power) {
      tx_power = 31;
    }

  CC2420TransmitP__CSN__clr();

  if (CC2420TransmitP__m_tx_power != tx_power) {
      CC2420TransmitP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP__m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.data) - 1;

#line 838
    CC2420TransmitP__TXFIFO__write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.data) - 1);
  }
}

# 305 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 128 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 128
{





  Atm128SpiP__Spi__enableSpi(TRUE);
  Atm128SpiP__McuPowerState__update();

  Atm128SpiP__Spi__write(tx);
  while (!(* (volatile uint8_t *)(0x0E + 0x20) & 0x80)) ;
  return Atm128SpiP__Spi__read();
}

#line 275
static error_t Atm128SpiP__SpiPacket__send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen)
#line 277
{
  uint8_t discard;

#line 279
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 279
    {
      Atm128SpiP__len = bufLen;
      Atm128SpiP__txBuffer = writeBuf;
      Atm128SpiP__rxBuffer = readBuf;
      Atm128SpiP__pos = 0;
    }
#line 284
    __nesc_atomic_end(__nesc_atomic); }
  if (bufLen > 0) {
      discard = Atm128SpiP__Spi__read();
      return Atm128SpiP__sendNextPart();
    }
  else {
      Atm128SpiP__zeroTask__postTask();
      return SUCCESS;
    }
}

#line 196
static error_t Atm128SpiP__sendNextPart(void )
#line 196
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 203
    {
      myLen = Atm128SpiP__len;
      tx = Atm128SpiP__txBuffer;
      rx = Atm128SpiP__rxBuffer;
      tmpPos = Atm128SpiP__pos;
      end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
      end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 214
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 217
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      if (tx != (void *)0) {
        Atm128SpiP__Spi__write(tx[tmpPos]);
        }
      else {
#line 231
        Atm128SpiP__Spi__write(0);
        }
      Atm128SpiP__pos = tmpPos;
    }
#line 234
    __nesc_atomic_end(__nesc_atomic); }


  return SUCCESS;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void ){
#line 56
  StateImplP__State__toIdle(2U);
#line 56
}
#line 56
# 181 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

#line 166
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 151 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg)
#line 151
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 153
  return __nesc_ntoh_leuint8(header->type.data);
}

#line 126
static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg)
#line 126
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 128
  return __nesc_ntoh_leuint16(header->dest.data);
}

#line 78
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 80
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg);

  if (len > CC2420ActiveMessageP__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_leuint8(header->type.data, id);
  __nesc_hton_leuint16(header->dest.data, addr);
  __nesc_hton_leuint16(header->destpan.data, CC2420ActiveMessageP__CC2420Config__getPanAddr());
  __nesc_hton_leuint16(header->src.data, CC2420ActiveMessageP__AMPacket__address());

  if (CC2420ActiveMessageP__RadioResource__immediateRequest() == SUCCESS) {
      error_t rc;

#line 94
      CC2420ActiveMessageP__SendNotifier__aboutToSend(id, addr, msg);

      rc = CC2420ActiveMessageP__SubSend__send(msg, len);
      if (rc != SUCCESS) {
          CC2420ActiveMessageP__RadioResource__release();
        }

      return rc;
    }
  else 
#line 102
    {
      CC2420ActiveMessageP__pending_length = len;
      CC2420ActiveMessageP__pending_message = msg;
      return CC2420ActiveMessageP__RadioResource__request();
    }
}

# 95 "/opt/tinyos-2.1.1/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC__addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 86 "/opt/tinyos-2.1.1/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static void *CC2420TinyosNetworkP__ActiveSend__getPayload(message_t *msg, uint8_t len)
#line 86
{
  if (len <= CC2420TinyosNetworkP__ActiveSend__maxPayloadLength()) {
      return msg->data;
    }
  else 
#line 89
    {
      return (void *)0;
    }
}

# 77 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static error_t /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Resource__request(uint8_t id)
#line 77
{
  /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state == /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
          /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__state = /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__RES_GRANTING;
          /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__Queue__enqueue(id);

          {
#line 84
            __nesc_atomic_end(__nesc_atomic); 
#line 84
            return __nesc_temp;
          }
        }
    }
#line 87
    __nesc_atomic_end(__nesc_atomic); }
#line 86
  /*AccelConfigP.Arbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 212 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 279 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void )
#line 279
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      unsigned short __nesc_temp = 
#line 280
      CC2420ControlP__m_short_addr;

      {
#line 280
        __nesc_atomic_end(__nesc_atomic); 
#line 280
        return __nesc_temp;
      }
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 98 "/opt/tinyos-2.1.1/tos/chips/cc2420/packet/CC2420PacketP.nc"
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg)
#line 98
{



  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->network.data);
}

# 764 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 764
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 765
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
#line 768
            __nesc_atomic_end(__nesc_atomic); 
#line 768
            return;
          }
        }
      CC2420ReceiveP__receivingPacket = FALSE;
#line 783
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }





          CC2420ReceiveP__beginReceive();
        }
      else 
        {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
#line 802
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP__attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 711 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__beginReceive(void )
#line 711
{
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
  /* atomic removed: atomic calls only */
#line 713
  CC2420ReceiveP__receivingPacket = TRUE;
  if (CC2420ReceiveP__SpiResource__isOwner()) {
      CC2420ReceiveP__receive();
    }
  else {
#line 717
    if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
        CC2420ReceiveP__receive();
      }
    else {
        CC2420ReceiveP__SpiResource__request();
      }
    }
}

#line 754
static void CC2420ReceiveP__receive(void )
#line 754
{
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__RXFIFO__beginRead((uint8_t *)CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf), 1);
}

# 189 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

#line 329
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 728 "/opt/tinyos-2.1.1/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 728
{








  CC2420ReceiveP__reset_state();

  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

#line 808
static void CC2420ReceiveP__reset_state(void )
#line 808
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 810
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

# 318 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP__SpiByte__write(addr);
}

# 137 "/opt/tinyos-2.1.1/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.data, FALSE);
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.data, CC2420_INVALID_TIMESTAMP);
}

# 842 "/opt/tinyos-2.1.1/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__signalDone(error_t err)
#line 842
{
  /* atomic removed: atomic calls only */
#line 843
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__abortSpiRelease = FALSE;
  CC2420TransmitP__ChipSpiResource__attemptRelease();
  CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, err);
}

#line 735
static void CC2420TransmitP__attemptSend(void )
#line 735
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 739
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          CC2420TransmitP__SFLUSHTX__strobe();
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__CSN__set();
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
          CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
          {
#line 746
            __nesc_atomic_end(__nesc_atomic); 
#line 746
            return;
          }
        }





      CC2420TransmitP__CSN__clr();
      status = CC2420TransmitP__m_cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP__SNOP__strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP__m_state = congestion ? CC2420TransmitP__S_SAMPLE_CCA : CC2420TransmitP__S_SFD;
      CC2420TransmitP__CSN__set();
    }
#line 765
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP__totalCcaChecks = 0;
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__congestionBackoff();
    }
  else 
#line 771
    {
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
    }
}





static void CC2420TransmitP__congestionBackoff(void )
#line 780
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 781
    {
      CC2420TransmitP__RadioBackoff__requestCongestionBackoff(CC2420TransmitP__m_msg);
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myCongestionBackoff);
    }
#line 784
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 62
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC__seed = mlcg;
  }
  return mlcg;
}

# 136 "/opt/tinyos-2.1.1/tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

#line 96
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type expires;
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )remaining << 0);
}

# 69 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();

#line 76
      if (/*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 456 "/opt/tinyos-2.1.1/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP__writeFsctrl(void )
#line 456
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 459
    {
      channel = CC2420ControlP__m_channel;
    }
#line 461
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP__writeMdmctrl0(void )
#line 473
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 474
    {
      CC2420ControlP__MDMCTRL0__write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP__addressRecognition && CC2420ControlP__hwAddressRecognition) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 483
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP__writeId(void )
#line 492
{
  nxle_uint16_t id[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 495
    {
      __nesc_hton_leuint16(id[0].data, CC2420ControlP__m_pan);
      __nesc_hton_leuint16(id[1].data, CC2420ControlP__m_short_addr);
    }
#line 498
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__PANID__write(0, (uint8_t *)&id, sizeof id);
}

# 260 "/opt/tinyos-2.1.1/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(uint8_t mode)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start();
  }
  return SUCCESS;
}

# 81 "/opt/tinyos-2.1.1/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static error_t CC2420CsmaP__SplitControl__start(void )
#line 81
{
  if (CC2420CsmaP__SplitControlState__requestState(CC2420CsmaP__S_STARTING) == SUCCESS) {
      CC2420CsmaP__CC2420Power__startVReg();
      return SUCCESS;
    }
  else {
#line 86
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
        return EALREADY;
      }
    else {
#line 89
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 93
  return EBUSY;
}

# 178 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 178
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_16(void )
#line 184
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Timer__overflow();
}

# 195 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void )
#line 195
{
  HplAtm128Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_13(void )
#line 199
{
  HplAtm128Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_24(void )
#line 203
{
  HplAtm128Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_11(void )
#line 207
{
  HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Timer__get());
}

__attribute((interrupt))   void __vector_14(void )
#line 211
{
  HplAtm128Timer1P__Timer__overflow();
}

# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void )
#line 46
{
  HplAtm128InterruptSigP__IntSig0__fired();
}


__attribute((signal))   void __vector_2(void )
#line 51
{
  HplAtm128InterruptSigP__IntSig1__fired();
}


__attribute((signal))   void __vector_3(void )
#line 56
{
  HplAtm128InterruptSigP__IntSig2__fired();
}


__attribute((signal))   void __vector_4(void )
#line 61
{
  HplAtm128InterruptSigP__IntSig3__fired();
}


__attribute((signal))   void __vector_5(void )
#line 66
{
  HplAtm128InterruptSigP__IntSig4__fired();
}


__attribute((signal))   void __vector_6(void )
#line 71
{
  HplAtm128InterruptSigP__IntSig5__fired();
}


__attribute((signal))   void __vector_7(void )
#line 76
{
  HplAtm128InterruptSigP__IntSig6__fired();
}


__attribute((signal))   void __vector_8(void )
#line 81
{
  HplAtm128InterruptSigP__IntSig7__fired();
}

# 102 "/opt/tinyos-2.1.1/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 102
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

# 99 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_21(void )
#line 99
{
  uint16_t data = HplAtm128AdcP__HplAtm128Adc__getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP__HplAtm128Adc__dataReady(data);
}

# 182 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
__attribute((signal))   void __vector_33(void )
#line 182
{
  HplAtm128I2CBusP__I2C__commandComplete();
}

# 78 "/opt/tinyos-2.1.1/tos/sensorboards/mts300/MagP.nc"
static void MagP__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
{
  MagP__I2CResource__release();
  if (MagP__gainData[0] == 1) 
    {
      MagP__Mag__gainAdjustXDone(error);
    }
  if (MagP__gainData[0] == 0) 
    {
      MagP__Mag__gainAdjustYDone(error);
    }
  return;
}

# 382 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__Atm128I2C__stop(void )
#line 382
{
  /* atomic removed: atomic calls only */
#line 383
  {
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(TRUE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(TRUE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
  }
}

# 108 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Resource__release(uint8_t id)
#line 108
{
  /* atomic removed: atomic calls only */
#line 109
  {
    if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__RES_BUSY && /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__resId == id) {
        if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Queue__isEmpty() == FALSE) {
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__reqResId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__Queue__dequeue();
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__NO_RES;
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__RES_GRANTING;
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__grantedTask__postTask();
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__default_owner_id;
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__RES_CONTROLLED;
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceConfigure__unconfigure(id);
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__5__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
#line 124
          SUCCESS;

#line 124
          return __nesc_temp;
        }
      }
  }
#line 127
  return FAIL;
}

