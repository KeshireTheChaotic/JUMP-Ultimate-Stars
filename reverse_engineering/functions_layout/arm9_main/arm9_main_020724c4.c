
void FUN_020724c4(int param_1,uint param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
                    /* JUS-TAG source_file_inferred="Record.cpp" */
  bVar1 = *param_3;
  if ((bVar1 != 0) && (bVar1 <= param_2)) {
    *param_3 = bVar1 - 1;
    uVar2 = (uint)*param_3;
    if (param_4 < uVar2) {
      for (uVar3 = param_4; uVar2 = (uint)*param_3, (int)uVar3 < (int)uVar2; uVar3 = uVar3 + 1) {
        FUN_02051890(param_1 + (uVar3 + 1) * 0x5c,param_1 + uVar3 * 0x5c,0x5c);
      }
      if (param_5 != 0) {
        for (; uVar2 = (uint)*param_3, (int)param_4 < (int)uVar2; param_4 = param_4 + 1) {
          FUN_02051890(param_5 + (param_4 + 1) * 0x4c,param_5 + param_4 * 0x4c,0x4c);
        }
      }
    }
    FUN_02078aa0(param_1 + uVar2 * 0x5c);
    FUN_02078b08(param_1 + (uint)*param_3 * 0x5c,0x2092454);
    if (param_5 != 0) {
      FUN_020517fc(param_5 + (uint)*param_3 * 0x4c,0);
    }
    DAT_020b02ac = 1;
  }
  return;
}

