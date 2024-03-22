#ifndef LAB_H
#define LAB_H

#include "LAB_Oscilloscope.h"
#include "LAB_Voltmeter.h"
#include "LAB_Ohmmeter.h"
#include "LAB_Function_Generator.h"
#include "LAB_Logic_Analyzer.h"
#include "LAB_Digital_Circuit_Checker.h"

#include "Software/LAB_Exporter.h"
#include "Software/LAB_Calibration.h"
#include "Software/LAB_LABChecker_Digital.h"
#include "Software/LAB_Oscilloscope_Display.h"

class AikaPi;

class LAB
{
  private:
    AikaPi& m_LAB_Core;

  public:
    LAB ();
   
    LAB_Oscilloscope            m_Oscilloscope;
    LAB_Voltmeter               m_Voltmeter;
    LAB_Ohmmeter                m_Ohmmeter;
    LAB_Function_Generator      m_Function_Generator;
    LAB_Logic_Analyzer          m_Logic_Analyzer;  
    LAB_Digital_Circuit_Checker m_Digital_Circuit_Checker;
    LAB_LABChecker_Digital      m_LABChecker_Digital;

    LAB_Exporter                m_Exporter;
    LAB_Oscilloscope_Display    m_Oscilloscope_Display;
    LAB_Calibration             m_Calibration;

    AikaPi& rpi () const;
};

#endif