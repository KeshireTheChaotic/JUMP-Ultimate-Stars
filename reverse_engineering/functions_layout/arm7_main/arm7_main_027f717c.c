
void FUN_027f717c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  jus_Rtc_Select();
  jus_Rtc_SendCommand(param_1,param_2);
  if (param_1 == 6) {
    jus_Rtc_WriteData(param_3,param_4);
  }
  else if (param_1 == 0x86) {
    jus_Rtc_ReadData(param_3,param_4);
  }
  jus_Rtc_Deselect();
  return;
}

