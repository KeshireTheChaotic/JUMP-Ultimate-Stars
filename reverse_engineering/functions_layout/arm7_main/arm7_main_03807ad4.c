
void FUN_03807ad4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 < param_2) {
    return;
  }
  uVar1 = 0x1c;
  uVar2 = param_1 >> 4;
  if ((int)param_2 <= (int)(param_1 >> 0x10)) {
    uVar1 = 0xc;
    uVar2 = param_1 >> 0x14;
  }
  if ((int)param_2 <= (int)(uVar2 >> 4)) {
    uVar1 = uVar1 - 8;
    uVar2 = uVar2 >> 8;
  }
  if ((int)param_2 <= (int)uVar2) {
    uVar1 = uVar1 - 4;
    uVar2 = uVar2 >> 4;
  }
                    /* WARNING: Could not recover jumptable at 0x03807b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_03807b28 + uVar1 * 0xc))((param_1 << (uVar1 & 0xff)) * 2,-param_2,uVar1 * 3,uVar2)
  ;
  return;
}

