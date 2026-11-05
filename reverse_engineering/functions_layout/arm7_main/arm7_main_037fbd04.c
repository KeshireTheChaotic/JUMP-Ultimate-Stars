
void FUN_037fbd04(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((param_1 & 1) != 0) {
      if ((iVar2 < 8) || (0xb < iVar2)) {
        if ((iVar2 < 3) || (6 < iVar2)) {
          puVar1 = &DAT_038082b0;
          if (iVar2 != 0) {
            (&DAT_03808138)[iVar2] = param_2;
            puVar1 = (undefined4 *)0x0;
          }
        }
        else {
          puVar1 = &DAT_03808250 + (iVar2 + 1) * 3;
        }
      }
      else {
        puVar1 = &DAT_03808250 + (iVar2 + -8) * 3;
      }
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = param_2;
        puVar1[2] = 0;
        puVar1[1] = 1;
      }
    }
    param_1 = param_1 >> 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x19);
  return;
}

