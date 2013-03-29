/*
	=========================================================
				Copyright 2013 Julian Schmidt

	This file is part of the Sonic Potions Drumsynth Editor
	=========================================================

    The Sonic Potions Drumsynth Editor is free software: you 
	can redistribute it and/or modify it under the terms of 
	the GNU General Public License as published by the Free 
	Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The Sonic Potions Drumsynth Editor is distributed in the
	hope that it will be useful, but WITHOUT ANY WARRANTY; 
	without even the implied warranty of MERCHANTABILITY or 
	FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General 
	Public License for more details.

    You should have received a copy of the GNU General 
	Public License along with the Sonic Potions Drumsynth 
	Editor. If not, see <http://www.gnu.org/licenses/>.
	=========================================================
 */
#include "menu.h"
/*
 * menuPages.h
 *
 * Created: 04.11.2012 08:26:19
 *  Author: Julian
 */ 


#ifndef MENUPAGES_H_
#define MENUPAGES_H_

#if 1
#define NUM_PAGES 15
#define NUM_SUB_PAGES 8
#define PROGMEM

#endif


/** This array hold the whole menu structure.
each voice has different pages. The pages hold the top and bottom enums to indicate which values and desriptors to show
*/
const Page menuPages[NUM_PAGES][NUM_SUB_PAGES] PROGMEM =
{
	//page 1 - Voice 1
	{
		//sub page 1 - Oscillator
		{
			TEXT_COARSE,	TEXT_FINE,	TEXT_WAVEFORM,		TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_COARSE1,	PAR_FINE1,	PAR_OSC_WAVE_DRUM1,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
		},
		//sub page 2 - Amp EG
		{
			TEXT_ATTACK,	TEXT_DECAY, TEXT_EG_SLOPE,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY, //TEXT_PITCH_DECAY,		
			PAR_VELOA1,		PAR_VELOD1,	PAR_VOL_SLOPE1, PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE//PAR_MOD_EG1,			
		},
		//sub page 3 - Modulation
		{
			TEXT_PITCH_DECAY,		TEXT_EG_SLOPE,		TEXT_MOD_AMOUNT,	TEXT_VEL_DEST,	TEXT_VEL_AMT,		TEXT_VEL_MOD_VOL,		TEXT_EMPTY,TEXT_EMPTY,
			PAR_MOD_EG1,	PAR_PITCH_SLOPE1,	PAR_MODAMNT1,		PAR_VEL_DEST_1,	PAR_VELO_MOD_AMT_1,	PAR_VOLUME_MOD_ON_OFF1,	PAR_NONE,PAR_NONE
			//TEXT_EG_SLOPE,		TEXT_MOD_AMOUNT,	TEXT_FM_AMOUNT,	TEXT_FM_FREQ,	
			//PAR_PITCH_SLOPE1,	PAR_MODAMNT1,		PAR_FMAMNT1,	PAR_FM_FREQ1,			
		},
		//sub page 4 - FM
		{
			TEXT_FM_AMOUNT,		TEXT_FM_FREQ,	TEXT_WAVEFORM,		TEXT_MODE,		TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_FMAMNT1,		PAR_FM_FREQ1,	PAR_MOD_WAVE_DRUM1,	PAR_MIX_MOD_1,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
			//TEXT_WAVEFORM,		TEXT_TRANSIENT_WAVE,	TEXT_TRANSIENT_VOLUME,	TEXT_TRANSIENT_FREQ,
			//PAR_MOD_WAVE_DRUM1,	PAR_TRANS1_WAVE,		PAR_TRANS1_VOL,			PAR_TRANS1_FREQ
		},
		// page 5 - transient sample
		{
			TEXT_TRANSIENT_WAVE,	TEXT_TRANSIENT_VOLUME,	TEXT_TRANSIENT_FREQ,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_TRANS1_WAVE,		PAR_TRANS1_VOL,			PAR_TRANS1_FREQ,		PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE	
			//TEXT_FILTER_F,			TEXT_FILTER_TYPE,		TEXT_FILTER_RESO,	TEXT_FILTER_DRIVE,		
			//PAR_FILTER_FREQ_DRUM1,	PAR_FILTER_TYPE_DRUM1,	PAR_RESO_DRUM1,		PAR_FILTER_DRIVE_1,	
		},
		// page 6 - filter
		{
			TEXT_FILTER_F,			TEXT_FILTER_RESO,	TEXT_FILTER_TYPE,		TEXT_FILTER_DRIVE,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,//TEXT_SAMPLE_RATE,		TEXT_MODE,		TEXT_VEL_DEST,	TEXT_VEL_AMT,
			PAR_FILTER_FREQ_1,	PAR_RESO_1,		PAR_FILTER_TYPE_1,	PAR_FILTER_DRIVE_1,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE	//PAR_VOICE_DECIMATION1,	PAR_MIX_MOD_1,	PAR_VEL_DEST_1,	PAR_VELO_MOD_AMT_1
		},
		//page 7 - LFO
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_FREQ_LFO1,	PAR_SYNC_LFO1,	PAR_AMOUNT_LFO1,	PAR_WAVE_LFO1,	PAR_RETRIGGER_LFO1,	PAR_OFFSET_LFO1,	PAR_VOICE_LFO1,			PAR_TARGET_LFO1
			//TEXT_VEL_MOD_VOL,		TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY,
			//PAR_VOLUME_MOD_ON_OFF1,	PAR_NONE,	PAR_NONE,	PAR_NONE
		},
		//page 8 - MIX
		{
			TEXT_VOLUME,	TEXT_PAN,	TEXT_SAMPLE_RATE,		TEXT_DRIVE, TEXT_AUDIO_OUT,TEXT_PAT_LENGTH,TEXT_EMPTY,TEXT_EMPTY,	//TEXT_MIDI_CHANNEL,	TEXT_AUDIO_OUT,			
			PAR_VOL1,		PAR_PAN1,	PAR_VOICE_DECIMATION1,	PAR_DRIVE1,	PAR_AUDIO_OUT1,PAR_TRACK_LENGTH,PAR_NONE,PAR_NONE				//PAR_MIDI_CHAN_1,	PAR_AUDIO_OUT1,				
		}
	},
	//page 2 - Voice 2 - drum
	{
		//sub page 1
		{
			TEXT_COARSE,	TEXT_FINE,	TEXT_WAVEFORM,		TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_COARSE2,	PAR_FINE2,	PAR_OSC_WAVE_DRUM2,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
			//TEXT_COARSE,	TEXT_FINE,	TEXT_DRIVE,	TEXT_WAVEFORM,	
			//PAR_COARSE2,	PAR_FINE2,	PAR_DRIVE2,	PAR_OSC_WAVE_DRUM2
		},
		//sub page 2
		{
			TEXT_ATTACK,	TEXT_DECAY, TEXT_EG_SLOPE,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY, //TEXT_PITCH_DECAY,		
			PAR_VELOA2,		PAR_VELOD2,	PAR_VOL_SLOPE2, PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE//PAR_MOD_EG1,			
			//TEXT_ATTACK,	TEXT_DECAY, TEXT_EG_SLOPE,  TEXT_PITCH_DECAY,		
			//PAR_VELOA2,		PAR_VELOD2, PAR_VOL_SLOPE2, PAR_MOD_EG2,		
		},
		//sub page 3 
		{
			TEXT_PITCH_DECAY,		TEXT_EG_SLOPE,		TEXT_MOD_AMOUNT,	TEXT_VEL_DEST,	TEXT_VEL_AMT,		TEXT_VEL_MOD_VOL,		TEXT_EMPTY,TEXT_EMPTY,
			PAR_MOD_EG2,	PAR_PITCH_SLOPE2,	PAR_MODAMNT2,		PAR_VEL_DEST_2,	PAR_VELO_MOD_AMT_2,	PAR_VOLUME_MOD_ON_OFF2,	PAR_NONE,PAR_NONE
			//TEXT_EG_SLOPE,		TEXT_MOD_AMOUNT, TEXT_FM_AMOUNT, TEXT_FM_FREQ,	
			//PAR_PITCH_SLOPE2,	PAR_MODAMNT2,	 PAR_FMAMNT2,	 PAR_FM_TUNE2	
		},
		//sub page 4
		{
			TEXT_FM_AMOUNT,		TEXT_FM_FREQ,	TEXT_WAVEFORM,		TEXT_MODE,		TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_FMAMNT2,		PAR_FM_FREQ2,	PAR_MOD_WAVE_DRUM2,	PAR_MIX_MOD_2,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
			//TEXT_WAVEFORM,		TEXT_TRANSIENT_WAVE,	TEXT_TRANSIENT_VOLUME,	TEXT_TRANSIENT_FREQ,
			//PAR_MOD_WAVE_DRUM2,	PAR_TRANS2_WAVE,		PAR_TRANS2_VOL,			PAR_TRANS2_FREQ
		},
		{
			TEXT_TRANSIENT_WAVE,	TEXT_TRANSIENT_VOLUME,	TEXT_TRANSIENT_FREQ,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_TRANS2_WAVE,		PAR_TRANS2_VOL,			PAR_TRANS2_FREQ,		PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE	
			//TEXT_FILTER_F,			TEXT_FILTER_TYPE,		TEXT_FILTER_RESO,	TEXT_FILTER_DRIVE,		
			//PAR_FILTER_FREQ_DRUM2,	PAR_FILTER_TYPE_DRUM2,	PAR_RESO_DRUM2,		PAR_FILTER_DRIVE_2,	
		},
		{
			TEXT_FILTER_F,			TEXT_FILTER_RESO,	TEXT_FILTER_TYPE,		TEXT_FILTER_DRIVE,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,//TEXT_SAMPLE_RATE,		TEXT_MODE,		TEXT_VEL_DEST,	TEXT_VEL_AMT,
			PAR_FILTER_FREQ_2,	PAR_RESO_2,		PAR_FILTER_TYPE_2,	PAR_FILTER_DRIVE_2,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE	//PAR_VOICE_DECIMATION1,	PAR_MIX_MOD_1,	PAR_VEL_DEST_1,	PAR_VELO_MOD_AMT_1
			//TEXT_SAMPLE_RATE,		TEXT_MODE,		TEXT_VEL_DEST,	TEXT_VEL_AMT,
			//PAR_VOICE_DECIMATION2,	PAR_MIX_MOD_2,	PAR_VEL_DEST_2,	PAR_VELO_MOD_AMT_2
		},
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_FREQ_LFO2,	PAR_SYNC_LFO2,	PAR_AMOUNT_LFO2,	PAR_WAVE_LFO2,	PAR_RETRIGGER_LFO2,	PAR_OFFSET_LFO2,	PAR_VOICE_LFO2,			PAR_TARGET_LFO2
			//TEXT_VEL_MOD_VOL,		TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY,
			//PAR_VOLUME_MOD_ON_OFF2,	PAR_NONE,	PAR_NONE,	PAR_NONE
		},
		//page 8 - MIX
		{
			TEXT_VOLUME,	TEXT_PAN,	TEXT_SAMPLE_RATE,		TEXT_DRIVE, TEXT_AUDIO_OUT,TEXT_PAT_LENGTH,TEXT_EMPTY,TEXT_EMPTY,	//TEXT_MIDI_CHANNEL,	TEXT_AUDIO_OUT,			
			PAR_VOL2,		PAR_PAN2,	PAR_VOICE_DECIMATION2,	PAR_DRIVE2,	PAR_AUDIO_OUT2,PAR_TRACK_LENGTH,PAR_NONE,PAR_NONE				//PAR_MIDI_CHAN_1,	PAR_AUDIO_OUT1,				
		}
	},
	//page 3 - Voice 3 - drum
	{
		//sub page 1 
		{
			TEXT_COARSE,	TEXT_FINE,	TEXT_WAVEFORM,		TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_COARSE3,	PAR_FINE3,	PAR_OSC_WAVE_DRUM3,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
			//TEXT_COARSE,	TEXT_FINE,	TEXT_DRIVE,	TEXT_WAVEFORM,	
			//PAR_COARSE3,	PAR_FINE3,	PAR_DRIVE3,	PAR_OSC_WAVE_DRUM3
		},
		//sub page 2
		{
			TEXT_ATTACK,	TEXT_DECAY, TEXT_EG_SLOPE,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY, //TEXT_PITCH_DECAY,		
			PAR_VELOA3,		PAR_VELOD3,	PAR_VOL_SLOPE3, PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE//PAR_MOD_EG1,			
			//TEXT_ATTACK,	TEXT_DECAY, TEXT_EG_SLOPE,  TEXT_PITCH_DECAY,	
			//PAR_VELOA3,		PAR_VELOD3, PAR_VOL_SLOPE3, PAR_MOD_EG3,		
		},
		//sub page 3
		{
			TEXT_PITCH_DECAY,		TEXT_EG_SLOPE,		TEXT_MOD_AMOUNT,	TEXT_VEL_DEST,	TEXT_VEL_AMT,		TEXT_VEL_MOD_VOL,		TEXT_EMPTY,TEXT_EMPTY,
			PAR_MOD_EG3,	PAR_PITCH_SLOPE3,	PAR_MODAMNT3,		PAR_VEL_DEST_3,	PAR_VELO_MOD_AMT_3,	PAR_VOLUME_MOD_ON_OFF3,	PAR_NONE,PAR_NONE
			//TEXT_EG_SLOPE,		TEXT_MOD_AMOUNT,	TEXT_FM_AMOUNT,	TEXT_FM_FREQ,	
			//PAR_PITCH_SLOPE3,	PAR_MODAMNT3,		PAR_FMAMNT3,	PAR_FM_TUNE3,		
		},
		//sub page 4
		{
			TEXT_FM_AMOUNT,		TEXT_FM_FREQ,	TEXT_WAVEFORM,		TEXT_MODE,		TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_FMAMNT3,		PAR_FM_FREQ3,	PAR_MOD_WAVE_DRUM3,	PAR_MIX_MOD_3,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
			//TEXT_WAVEFORM,		TEXT_TRANSIENT_WAVE,	TEXT_TRANSIENT_VOLUME,	TEXT_TRANSIENT_FREQ,
			//PAR_MOD_WAVE_DRUM3,	PAR_TRANS3_WAVE,		PAR_TRANS3_VOL,			PAR_TRANS3_FREQ
		},
		{
			TEXT_TRANSIENT_WAVE,	TEXT_TRANSIENT_VOLUME,	TEXT_TRANSIENT_FREQ,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_TRANS3_WAVE,		PAR_TRANS3_VOL,			PAR_TRANS3_FREQ,		PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE	
			//TEXT_FILTER_F,			TEXT_FILTER_TYPE,		TEXT_FILTER_RESO,	TEXT_FILTER_DRIVE,		
			//PAR_FILTER_FREQ_DRUM3,	PAR_FILTER_TYPE_DRUM3,	PAR_RESO_DRUM3,		PAR_FILTER_DRIVE_3,	
		},
		{
			TEXT_FILTER_F,			TEXT_FILTER_RESO,	TEXT_FILTER_TYPE,		TEXT_FILTER_DRIVE,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,//TEXT_SAMPLE_RATE,		TEXT_MODE,		TEXT_VEL_DEST,	TEXT_VEL_AMT,
			PAR_FILTER_FREQ_3,	PAR_RESO_3,		PAR_FILTER_TYPE_3,	PAR_FILTER_DRIVE_3,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE	//PAR_VOICE_DECIMATION1,	PAR_MIX_MOD_1,	PAR_VEL_DEST_1,	PAR_VELO_MOD_AMT_1
			//TEXT_SAMPLE_RATE,		TEXT_MODE,		TEXT_VEL_DEST,	TEXT_VEL_AMT,
			//PAR_VOICE_DECIMATION3,	PAR_MIX_MOD_3,	PAR_VEL_DEST_3,	PAR_VELO_MOD_AMT_3
		},
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_FREQ_LFO3,	PAR_SYNC_LFO3,	PAR_AMOUNT_LFO3,	PAR_WAVE_LFO3,	PAR_RETRIGGER_LFO3,	PAR_OFFSET_LFO3,	PAR_VOICE_LFO3,			PAR_TARGET_LFO3
			//TEXT_VEL_MOD_VOL,		TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY,
			//PAR_VOLUME_MOD_ON_OFF2,	PAR_NONE,	PAR_NONE,	PAR_NONE
		},
		//page 8 - MIX
		{
			TEXT_VOLUME,	TEXT_PAN,	TEXT_SAMPLE_RATE,		TEXT_DRIVE, TEXT_AUDIO_OUT,TEXT_PAT_LENGTH,TEXT_EMPTY,TEXT_EMPTY,	//TEXT_MIDI_CHANNEL,	TEXT_AUDIO_OUT,			
			PAR_VOL3,		PAR_PAN3,	PAR_VOICE_DECIMATION3,	PAR_DRIVE3,	PAR_AUDIO_OUT3,PAR_TRACK_LENGTH,PAR_NONE,PAR_NONE				//PAR_MIDI_CHAN_1,	PAR_AUDIO_OUT1,				
		}
	},
	//page 4 - Voice 4 - snare/clap
	{
		//sub page 1
		{
			TEXT_COARSE,	TEXT_FINE,	TEXT_NOISE,			TEXT_MIX,	TEXT_WAVEFORM,		TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,	
			PAR_COARSE4,	PAR_FINE4,	PAR_NOISE_FREQ1,	PAR_MIX1,	PAR_OSC_WAVE_SNARE,	PAR_NONE,PAR_NONE,PAR_NONE	
		},
		//sub page 2
		{
			TEXT_ATTACK,	TEXT_DECAY,	TEXT_REPEAT,	TEXT_EG_SLOPE,			TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_VELOA4,		PAR_VELOD4,	PAR_REPEAT4,	PAR_VOL_SLOPE4,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE	
		},
		//sub page 3
		{
			TEXT_PITCH_DECAY,	TEXT_EG_SLOPE,		TEXT_MOD_AMOUNT,	TEXT_VEL_DEST,	TEXT_VEL_AMT,	TEXT_VEL_MOD_VOL,			TEXT_EMPTY,TEXT_EMPTY,
			PAR_MOD_EG4,		PAR_PITCH_SLOPE4,	PAR_MODAMNT4,		PAR_VEL_DEST_4,	PAR_VELO_MOD_AMT_4,	PAR_VOLUME_MOD_ON_OFF4,	PAR_NONE,PAR_NONE	
		},
		//sub page 4 - FM
		{
			TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
		},
		//smp
		{
			TEXT_TRANSIENT_WAVE,	TEXT_TRANSIENT_VOLUME,	TEXT_TRANSIENT_FREQ, 	TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY, TEXT_EMPTY,	
			PAR_TRANS4_WAVE,		PAR_TRANS4_VOL,			PAR_TRANS4_FREQ	,	 	PAR_NONE,	PAR_NONE,	PAR_NONE,	PAR_NONE,	PAR_NONE
		},
		//filter
		{
			TEXT_FILTER_F,		TEXT_FILTER_RESO,	TEXT_FILTER_TYPE, TEXT_FILTER_DRIVE,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,	
			PAR_FILTER_FREQ_4,	PAR_RESO_4,			PAR_FILTER_TYPE_4, PAR_FILTER_DRIVE_4,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE	
		},
		//LFO
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_FREQ_LFO4,	PAR_SYNC_LFO4,	PAR_AMOUNT_LFO4,	PAR_WAVE_LFO4,	PAR_RETRIGGER_LFO4,	PAR_OFFSET_LFO4,	PAR_VOICE_LFO4,			PAR_TARGET_LFO4
		},
		//MIX
		{
			TEXT_VOLUME,	TEXT_PAN,	TEXT_SAMPLE_RATE,		TEXT_DRIVE,				TEXT_AUDIO_OUT,	TEXT_PAT_LENGTH,TEXT_EMPTY,TEXT_EMPTY,
			PAR_VOL4,		PAR_PAN4,	PAR_VOICE_DECIMATION4,	PAR_SNARE_DISTORTION,	PAR_AUDIO_OUT4,	PAR_TRACK_LENGTH,PAR_NONE,PAR_NONE
		}
	},
	//page 5 - Voice 5 - cymbal
	{
		//sub page 1
		{
			TEXT_COARSE,	TEXT_FINE, 		TEXT_WAVEFORM,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_COARSE5,	PAR_FINE5, 		PAR_WAVE1_CYM,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE		
		},
		//sub page 2
		{
			TEXT_ATTACK,	TEXT_DECAY,	TEXT_REPEAT,	TEXT_EG_SLOPE,		TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_VELOA5,		PAR_VELOD5,	PAR_REPEAT5,	PAR_VOL_SLOPE5,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
			
		},
		//sub page 3 - mod
		{
			TEXT_VEL_DEST,	TEXT_VEL_AMT,	TEXT_VEL_MOD_VOL,			TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_VEL_DEST_5,	PAR_VELO_MOD_AMT_5,	PAR_VOLUME_MOD_ON_OFF5, PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
		},
		//sub page 4 - fm
		{
			TEXT_MOD_OSC1_FREQ,	TEXT_MOD_OSC2_FREQ,	TEXT_MOD_OSC1_GAIN,		TEXT_MOD_OSC2_GAIN,		TEXT_WAVEFORM,	TEXT_WAVEFORM,	TEXT_EMPTY,TEXT_EMPTY,
			PAR_MOD_OSC_F1_CYM,	PAR_MOD_OSC_F2_CYM,	PAR_MOD_OSC_GAIN1_CYM,	PAR_MOD_OSC_GAIN2_CYM,	PAR_WAVE2_CYM,	PAR_WAVE3_CYM,	PAR_NONE,PAR_NONE
			//TEXT_WAVEFORM,	TEXT_WAVEFORM,	TEXT_WAVEFORM,	TEXT_TRANSIENT_FREQ, 
			//PAR_WAVE1_CYM,	PAR_WAVE2_CYM,	PAR_WAVE3_CYM,	PAR_TRANS5_FREQ	
		},
		//smp
		{
			 TEXT_TRANSIENT_WAVE,	TEXT_TRANSIENT_VOLUME,	TEXT_TRANSIENT_FREQ,	TEXT_EMPTY,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_TRANS5_WAVE,		PAR_TRANS5_VOL,			PAR_TRANS5_FREQ,		PAR_NONE,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
		},
		//filter
		{
			TEXT_FILTER_F,		TEXT_FILTER_RESO,	TEXT_FILTER_TYPE,	TEXT_FILTER_DRIVE,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_FILTER_FREQ_5,	PAR_RESO_5,			PAR_FILTER_TYPE_5,	PAR_FILTER_DRIVE_5,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
		},
		//lfo
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_FREQ_LFO5,	PAR_SYNC_LFO5,	PAR_AMOUNT_LFO5,	PAR_WAVE_LFO5,	PAR_RETRIGGER_LFO5,	PAR_OFFSET_LFO5,	PAR_VOICE_LFO5,			PAR_TARGET_LFO5
		},
		//mix
		{
			TEXT_VOLUME,	TEXT_PAN,	TEXT_SAMPLE_RATE,		TEXT_DRIVE,					TEXT_AUDIO_OUT,		TEXT_PAT_LENGTH,TEXT_EMPTY,TEXT_EMPTY,
			PAR_VOL5,		PAR_PAN5,	PAR_VOICE_DECIMATION5,	PAR_CYMBAL_DISTORTION,		PAR_AUDIO_OUT5,		PAR_TRACK_LENGTH,PAR_NONE,PAR_NONE
		}

	},
	
	//page 6 - Voice 6 - HH/Cymbal (FM)
	{
		//sub page 1 - osc
		{
			TEXT_COARSE,	TEXT_FINE,	TEXT_WAVEFORM,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,		
			PAR_COARSE6,	PAR_FINE6,	PAR_WAVE1_HH,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE			
		},
		//sub page 2 - amp eg
		{
			TEXT_ATTACK,	TEXT_DECAY_CLOSED,	TEXT_DECAY_OPEN,	TEXT_EG_SLOPE, 	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_VELOA6,		PAR_VELOD6_CLOSED,			PAR_VELOD6_OPEN,	PAR_VOL_SLOPE6, PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE			
		},
		//sub page 3 - mod
		{
			TEXT_VEL_DEST,	TEXT_VEL_AMT,	TEXT_VEL_MOD_VOL,			TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_VEL_DEST_6,	PAR_VELO_MOD_AMT_6,	PAR_VOLUME_MOD_ON_OFF6, PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
						
			//TEXT_MOD_OSC1_FREQ,	TEXT_MOD_OSC2_FREQ,	TEXT_MOD_OSC1_GAIN,	TEXT_MOD_OSC2_GAIN,
			//PAR_MOD_OSC_F1,		PAR_MOD_OSC_F2,		PAR_MOD_OSC_GAIN1,	PAR_MOD_OSC_GAIN2
		},
		//sub page 4 - fm
		{
			TEXT_MOD_OSC1_FREQ,	TEXT_MOD_OSC2_FREQ,	TEXT_MOD_OSC1_GAIN,	TEXT_MOD_OSC2_GAIN,	TEXT_WAVEFORM,	TEXT_WAVEFORM,	TEXT_EMPTY,TEXT_EMPTY,
			PAR_MOD_OSC_F1,		PAR_MOD_OSC_F2,		PAR_MOD_OSC_GAIN1,	PAR_MOD_OSC_GAIN2,	PAR_WAVE2_HH,	PAR_WAVE3_HH,	PAR_NONE,PAR_NONE	
		},
		//smp
		{
			TEXT_TRANSIENT_WAVE,	TEXT_TRANSIENT_VOLUME,	TEXT_TRANSIENT_FREQ	,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_TRANS6_WAVE,		PAR_TRANS6_VOL,			PAR_TRANS6_FREQ		,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
		},
		//filter
		{
			TEXT_FILTER_F,			TEXT_FILTER_RESO,	TEXT_FILTER_TYPE,	TEXT_FILTER_DRIVE,	TEXT_EMPTY,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_FILTER_FREQ_6,	PAR_RESO_6,			PAR_FILTER_TYPE_6,	PAR_FILTER_DRIVE_6,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
		},
		//lfo
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_FREQ_LFO6,	PAR_SYNC_LFO6,	PAR_AMOUNT_LFO6,	PAR_WAVE_LFO6,	PAR_RETRIGGER_LFO6,	PAR_OFFSET_LFO6,	PAR_VOICE_LFO6,			PAR_TARGET_LFO6
		},
		//mix
		{
			TEXT_VOLUME,	TEXT_PAN,	TEXT_SAMPLE_RATE,		TEXT_DRIVE,			TEXT_AUDIO_OUT,	TEXT_PAT_LENGTH,TEXT_EMPTY,TEXT_EMPTY,
			PAR_VOL6,		PAR_PAN6,	PAR_VOICE_DECIMATION6,	PAR_HAT_DISTORTION,	PAR_AUDIO_OUT6,	PAR_TRACK_LENGTH,PAR_NONE,PAR_NONE
		}
	},
	//page 7 - Voice 6 - HH/Cymbal (FM) - same as voice 6 -> open hi hat
	{
		//sub page 1 - osc
		{
			TEXT_COARSE,	TEXT_FINE,	TEXT_WAVEFORM,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,		
			PAR_COARSE6,	PAR_FINE6,	PAR_WAVE1_HH,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,			
		},
		//sub page 2 - amp eg
		{
			TEXT_ATTACK,	TEXT_DECAY_CLOSED,	TEXT_DECAY_OPEN,	TEXT_EG_SLOPE, 	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_VELOA6,		PAR_VELOD6_CLOSED,			PAR_VELOD6_OPEN,	PAR_VOL_SLOPE6, PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE			
		},
		//sub page 3 - mod
		{
			TEXT_VEL_DEST,	TEXT_VEL_AMT,	TEXT_VEL_MOD_VOL,			TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_VEL_DEST_6,	PAR_VELO_MOD_AMT_6,	PAR_VOLUME_MOD_ON_OFF6, PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
						
			//TEXT_MOD_OSC1_FREQ,	TEXT_MOD_OSC2_FREQ,	TEXT_MOD_OSC1_GAIN,	TEXT_MOD_OSC2_GAIN,
			//PAR_MOD_OSC_F1,		PAR_MOD_OSC_F2,		PAR_MOD_OSC_GAIN1,	PAR_MOD_OSC_GAIN2
		},
		//sub page 4 - fm
		{
			TEXT_MOD_OSC1_FREQ,	TEXT_MOD_OSC2_FREQ,	TEXT_MOD_OSC1_GAIN,	TEXT_MOD_OSC2_GAIN,	TEXT_WAVEFORM,	TEXT_WAVEFORM,		TEXT_EMPTY,TEXT_EMPTY,
			PAR_MOD_OSC_F1,		PAR_MOD_OSC_F2,		PAR_MOD_OSC_GAIN1,	PAR_MOD_OSC_GAIN2,	PAR_WAVE2_HH,	PAR_WAVE3_HH,			PAR_NONE,PAR_NONE	
		},
		//smp
		{
			TEXT_TRANSIENT_WAVE,	TEXT_TRANSIENT_VOLUME,	TEXT_TRANSIENT_FREQ	,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_TRANS6_WAVE,		PAR_TRANS6_VOL,			PAR_TRANS6_FREQ		,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
		},
		//filter
		{
			TEXT_FILTER_F,			TEXT_FILTER_RESO,	TEXT_FILTER_TYPE,	TEXT_FILTER_DRIVE,	TEXT_EMPTY,	TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_FILTER_FREQ_6,	PAR_RESO_6,			PAR_FILTER_TYPE_6,	PAR_FILTER_DRIVE_6,	PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
		},
		//lfo
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_FREQ_LFO6,	PAR_SYNC_LFO6,	PAR_AMOUNT_LFO6,	PAR_WAVE_LFO6,	PAR_RETRIGGER_LFO6,	PAR_OFFSET_LFO6,	PAR_VOICE_LFO6,			PAR_TARGET_LFO6
		},
		//mix
		{
			TEXT_VOLUME,	TEXT_PAN,	TEXT_SAMPLE_RATE,		TEXT_DRIVE,			TEXT_AUDIO_OUT,	TEXT_PAT_LENGTH,		TEXT_EMPTY,TEXT_EMPTY,
			PAR_VOL6,		PAR_PAN6,	PAR_VOICE_DECIMATION6,	PAR_HAT_DISTORTION,	PAR_AUDIO_OUT6,	PAR_TRACK_LENGTH,	PAR_NONE,PAR_NONE
		}
	},
	
	// MENU_MIDI_PAGE
	{
		{
			TEXT_BPM,	TEXT_FETCH,	TEXT_FOLLOW,	TEXT_QUANTISATION,	TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY,
			PAR_BPM,	PAR_FETCH,	PAR_FOLLOW,		PAR_QUANTISATION,	PAR_NONE,	PAR_NONE,	PAR_NONE,	PAR_NONE
		}		
	},
		//page 8 - Load
	{
		/*this entry is not needed.
		load and save pages are a special case and are handled differently in the menu_repaint() function
		*/
	},
	//page 9 - Save	
	{
		/*this entry is not needed.
		load and save pages are a special case and are handled differently in the menu_repaint() function
		*/
	},
	/*
	//page 7 - LFO 1
	{
		//sub page 1 - lfo 1
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	
			PAR_FREQ_LFO1,	PAR_SYNC_LFO1,	PAR_AMOUNT_LFO1,	PAR_WAVE_LFO1,	
		},
		
		// sub page 2
		{
			TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_RETRIGGER_LFO1,	PAR_OFFSET_LFO1,	PAR_VOICE_LFO1,			PAR_TARGET_LFO1,
		},	
	},
	//LFO 2
	{
		//sub page 3 - lfo 2
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	
			PAR_FREQ_LFO2,	PAR_SYNC_LFO2,	PAR_AMOUNT_LFO2,	PAR_WAVE_LFO2,	
		},	

		// sub page 4
		{
			TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_RETRIGGER_LFO2,	PAR_OFFSET_LFO2,	PAR_VOICE_LFO2,			PAR_TARGET_LFO2,
		},
	},
	//LFO 3
	{
		//sub page 5 - lfo 3
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	
			PAR_FREQ_LFO3,	PAR_SYNC_LFO3,	PAR_AMOUNT_LFO3,	PAR_WAVE_LFO3,	
		},	
		// sub page 6
		{
			TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_RETRIGGER_LFO3,	PAR_OFFSET_LFO3,	PAR_VOICE_LFO3,			PAR_TARGET_LFO3,
		},
	},
	//LFO 4
	{
		//sub page 7 - lfo 4
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	
			PAR_FREQ_LFO4,	PAR_SYNC_LFO4,	PAR_AMOUNT_LFO4,	PAR_WAVE_LFO4,	
		},	
		// sub page 8
		{
			TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_RETRIGGER_LFO4,	PAR_OFFSET_LFO4,	PAR_VOICE_LFO4,			PAR_TARGET_LFO4,
		},
	},
	//LFO 5
	{
		//sub page 9 - lfo 5
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	
			PAR_FREQ_LFO5,	PAR_SYNC_LFO5,	PAR_AMOUNT_LFO5,	PAR_WAVE_LFO5,	
		},	
		// sub page 10
		{
			TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_RETRIGGER_LFO5,	PAR_OFFSET_LFO5,	PAR_VOICE_LFO5,			PAR_TARGET_LFO5,
		},
	},
	//LFO 6
	{
		//sub page 11 - lfo 6
		{
			TEXT_FREQ_LFO,	TEXT_SYNC_LFO,	TEXT_MOD_LFO,		TEXT_WAVE_LFO,	
			PAR_FREQ_LFO6,	PAR_SYNC_LFO6,	PAR_AMOUNT_LFO6,	PAR_WAVE_LFO6,	
		},	
		// sub page 12
		{
			TEXT_RETRIGGER_LFO,	TEXT_OFFSET_LFO,	TEXT_TARGET_VOICE_LFO,	TEXT_TARGET_LFO,
			PAR_RETRIGGER_LFO6,	PAR_OFFSET_LFO6,	PAR_VOICE_LFO6,			PAR_TARGET_LFO6,
		},
	},
	*/

	
	//Page 10
	//---------------- Mute Mode Menu pages ---------------------------
	//These pages are shown when the selected mode is the "mute/pattern select" page
	//there is only one page with subpages shown for the whole mode
	{
		{		
		TEXT_ROLL_SPEED,	TEXT_X_FADE,	TEXT_SAMPLE_RATE,			TEXT_SHUFFLE, TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY,
		PAR_ROLL,			PAR_MORPH,		PAR_VOICE_DECIMATION_ALL,	PAR_SHUFFLE,	PAR_NONE,	PAR_NONE,	PAR_NONE,	PAR_NONE
		}
	},
	
	//Page 11
	//---------------- Seq Mode Menu pages ---------------------------		
	/*shown when sequencer button is pressed
	the parameter entries of this page are dynamically updated when a step in sequencer mode is selected
	*/
	{
		{		
			TEXT_STEP_VOLUME,	TEXT_NOTE,		TEXT_PROBABILITY,		TEXT_PARAM_DEST,	TEXT_PARAM_VAL,	TEXT_PARAM_DEST,	TEXT_PARAM_VAL,		TEXT_EMPTY,	
			PAR_STEP_VOLUME,	PAR_STEP_NOTE,	PAR_STEP_PROB,			PAR_P1_DEST,		PAR_P1_VAL,		PAR_P2_DEST,		PAR_P2_VAL,			PAR_NONE,
		}		
	},	
	//---------------- Euklid pattern generator page ------------------------------
	/* shown when in 'mute mode' and the seq edit button is pressed. button toggles between modes*/
	{
		{
			TEXT_PAT_LENGTH,	TEXT_NUM_STEPS,		TEXT_X_FADE,	TEXT_ROLL_SPEED, TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY,TEXT_EMPTY,
			PAR_EUKLID_LENGTH,	PAR_EUKLID_STEPS,	PAR_MORPH,		PAR_ROLL, PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
		}		
	},
	//---------------- pattern settings page ------------------------------
	{
		{
			TEXT_PATTERN_BEAT, TEXT_PATTERN_NEXT,	TEXT_EMPTY,	TEXT_EMPTY, TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,TEXT_EMPTY,
			PAR_PATTERN_BEAT,	PAR_PATTERN_NEXT,	PAR_NONE,	PAR_NONE, PAR_NONE,PAR_NONE,PAR_NONE,PAR_NONE
		}		
	},
	//---------------- RECORDING_PAGE ------------------------------
	{
		{
			TEXT_AUTOMATION_TRACK,	TEXT_QUANTISATION,	TEXT_EMPTY, TEXT_EMPTY, TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY,	TEXT_EMPTY,
			PAR_AUTOM_TRACK,		PAR_QUANTISATION,	PAR_NONE,	PAR_NONE,	PAR_NONE,	PAR_NONE,	PAR_NONE,	PAR_NONE
		}	
		
	}
	//---------------- VOICE1_SETTINGS_PAGE ----------------------------------------
	/*
	{
		{
			TEXT_MIDI_CHANNEL,	TEXT_AUDIO_OUT,		TEXT_VOLUME,	TEXT_PAN, 
			PAR_MIDI_CHAN_1,	PAR_AUDIO_OUT1,		PAR_VOL1,		PAR_PAN1
		}		
	},
	//---------------- VOICE2_SETTINGS_PAGE ----------------------------------------
	{
		{
			TEXT_MIDI_CHANNEL,	TEXT_AUDIO_OUT,		TEXT_VOLUME,	TEXT_PAN,
			PAR_MIDI_CHAN_2,	PAR_AUDIO_OUT2,		PAR_VOL2,		PAR_PAN2
		}		
	},
	//---------------- VOICE3_SETTINGS_PAGE ----------------------------------------
	{
		{
			TEXT_MIDI_CHANNEL,	TEXT_AUDIO_OUT,		TEXT_VOLUME,	TEXT_PAN,
			PAR_MIDI_CHAN_3,	PAR_AUDIO_OUT3,		PAR_VOL3,		PAR_PAN3
		}		
	},
	//---------------- VOICE4_SETTINGS_PAGE ----------------------------------------
	{
		{
			TEXT_MIDI_CHANNEL,	TEXT_AUDIO_OUT,		TEXT_VOLUME,	TEXT_PAN,
			PAR_MIDI_CHAN_4,	PAR_AUDIO_OUT4,		PAR_VOL4,		PAR_PAN4
		}		
	},
	//---------------- VOICE5_SETTINGS_PAGE ----------------------------------------
	{
		{
			TEXT_MIDI_CHANNEL,	TEXT_AUDIO_OUT,		TEXT_VOLUME,	TEXT_PAN,
			PAR_MIDI_CHAN_5,	PAR_AUDIO_OUT5,		PAR_VOL5,		PAR_PAN5
		}		
	},
	//---------------- VOICE6_SETTINGS_PAGE ----------------------------------------
	{
		{
			TEXT_MIDI_CHANNEL,	TEXT_AUDIO_OUT,		TEXT_VOLUME,	TEXT_PAN,
			PAR_MIDI_CHAN_6,	PAR_AUDIO_OUT6,		PAR_VOL6,		PAR_PAN6
		}		
	},
	*/

	
	
	
};
//-----------------------------------------------------------------


#endif /* MENUPAGES_H_ */