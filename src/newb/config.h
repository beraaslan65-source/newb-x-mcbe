#ifndef NL_CONFIG_H
#define NL_CONFIG_H

/* Color correction */
#define NL_TONEMAP_TYPE 4              // 1:Exponential, 2:Reinhard, 3:Extended Reinhard, 4:ACES
#define NL_GAMMA 1.15                  // 0.3 low ~ 2.0 high
#define NL_EXPOSURE 1.2                // [toggle] 0.5 dark ~ 3.0 bright
#define NL_SATURATION 1.45              // [toggle] 0.0 grayscale ~ 4.0 super saturated
//#define NL_TINT                      // [toggle] enable light/dark tone tinting
#define NL_TINT_LOW  vec3(0.3,0.5,1.4) // color tint for dark tone
#define NL_TINT_HIGH vec3(1.4,0.7,0.3) // color tint for light tone

/* Lighting */
#define NL_SUNLIGHT_INTENSITY   3.5  // 1.0 weak ~ 5.0 bright
#define NL_TORCHLIGHT_INTENSITY 1.2  // 0.5 weak ~ 3.0 bright
#define NL_SHADOW_INTENSITY     0.45 // 0.0 no shadow ~ 1.0 strong shadow
#define NL_MIN_LIGHTING_BOOST   2.2  // 1.0 minimal lighting boost for dark areas ~ 3.0 brighter dark areas
#define NL_BLINKING_TORCH            // [toggle] flickering light
#define NL_CLOUD_SHADOW              // [toggle] cloud shadow (simple clouds only)

/* Ambient light for nether/end */
#define NL_NETHER_AMBIENT vec3(3.0,2.16,1.89)
#define NL_END_AMBIENT    vec3(1.98,1.25,2.3)

/* Sun/moon light color */
#define NL_DAWN_SUNLIGHT_COL   vec3(1.0,0.55,0.4)  
#define NL_NOON_SUNLIGHT_COL   vec3(1.0,0.92,0.85) 
#define NL_NIGHT_MOONLIGHT_COL vec3(0.04,0.06,0.25) 

/* Torch colors */
#define NL_OVERWORLD_TORCH_COL  vec3(1.0,0.58,0.25) 
#define NL_UNDERWATER_TORCH_COL vec3(1.0,0.52,0.18)
#define NL_NETHER_TORCH_COL     vec3(1.0,0.52,0.18)
#define NL_END_TORCH_COL        vec3(1.0,0.52,0.18)

/* Fog */
#define NL_FOG 1.0                // [toggle] 0.1 subtle ~ 1.0 blend with sky completely
#define NL_MIST_DENSITY 0.35      // 0.0 no mist ~ 1.0 misty
#define NL_RAIN_MIST_OPACITY 0.22 // [toggle] 0.04 very subtle ~ 0.5 thick rain mist blow
#define NL_CLOUDY_FOG 0.2         // [toggle] 0.0 subtle - 0.8 dense fog clouds

/* Sky */
#define NL_SKY_VOID_FACTOR     0.5
#define NL_SKY_VOID_DARKNESS   0.3
#define NL_SKY_RAIN_MIX_FACTOR 0.9

/* Sky colors - zenith=top, horizon=bottom */
#define NL_DAWN_ZENITH_COL   vec3(0.2,0.45,0.8)   
#define NL_DAWN_HORIZON_COL  vec3(1.5,0.65,0.65)  
#define NL_DAWN_EDGE_COL     vec3(1.2,0.85,0.85)
#define NL_DAY_ZENITH_COL    vec3(0.4,0.75,1.0)   
#define NL_DAY_HORIZON_COL   vec3(0.8,0.95,1.0)   
#define NL_DAY_EDGE_COL      vec3(1.44,1.56,1.62)
#define NL_NIGHT_ZENITH_COL  vec3(0.02,0.03,0.12) 
#define NL_NIGHT_HORIZON_COL vec3(0.05,0.06,0.18) 
#define NL_NIGHT_EDGE_COL    vec3(0.06,0.08,0.18)
#define NL_RAIN_ZENITH_COL   vec3(0.47,0.51,0.56)
#define NL_RAIN_HORIZON_COL  vec3(0.6,0.6,0.6)

#define NL_END_ZENITH_COL    vec3(0.08,0.001,0.1)
#define NL_END_HORIZON_COL   vec3(0.6,0.02,0.6)

/* Rainbow */
#define NL_RAINBOW           // [toggle] enable rainbow in sky
#define NL_RAINBOW_CLEAR 0.3 // 0.3 subtle ~ 1.0 bright during clear weather
#define NL_RAINBOW_RAIN  0.6 // 0.3 subtle ~ 1.0 bright during rain weather

/* Ore glow intensity */
#define NL_GLOW_TEX 2.3           
#define NL_GLOW_SHIMMER 0.8       
#define NL_GLOW_SHIMMER_SPEED 0.9 

/* Waving */
#define NL_PLANTS_WAVE 0.08    
#define NL_LANTERN_WAVE 0.16   
#define NL_WAVE_SPEED 2.0      
#define NL_WAVE_RANGE 13.0     

/* Water */
#define NL_WATER_TRANSPARENCY 0.5 
#define NL_WATER_BUMP 0.05        
#define NL_WATER_WAVE_SPEED  0.5  
#define NL_WATER_TEX_OPACITY 0.2  
#define NL_WATER_WAVE             
#define NL_WATER_TINT vec3(0.6,0.95,0.85) 

/* Underwater */
#define NL_UNDERWATER_BRIGHTNESS 1.2         
#define NL_CAUSTIC_INTENSITY 2.5             
#define NL_UNDERWATER_WAVE 0.08               
#define NL_UNDERWATER_STREAKS 1.4            
#define NL_UNDERWATER_TINT vec3(0.85,1.0,0.95) 

/* Cloud type */
#define NL_CLOUD_TYPE 1 

/* Soft cloud settings */
#define NL_CLOUD1_SCALE vec2(0.012, 0.018) 
#define NL_CLOUD1_DEPTH 2.5                
#define NL_CLOUD1_SPEED 0.02               
#define NL_CLOUD1_DENSITY 0.45             
#define NL_CLOUD1_OPACITY 0.75              

/* Aurora settings */
#define NL_AURORA 2.5           
#define NL_AURORA_VELOCITY 0.02 
#define NL_AURORA_SCALE 0.03    
#define NL_AURORA_WIDTH 0.25    
#define NL_AURORA_COL1 vec3(0.8,0.3,0.9) 
#define NL_AURORA_COL2 vec3(0.2,0.8,0.9) 

#define NL_CLOUD_AURORA_REFLECTION 

/* Shooting star */
#define NL_SHOOTING_STAR 1.0        
#define NL_SHOOTING_STAR_PERIOD 4.0 

#endif

