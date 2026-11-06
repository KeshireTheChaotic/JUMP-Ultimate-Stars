
undefined4 FUN_0215264c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  int local_1c;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < param_3) {
    local_1c = 0;
    do {
      iVar1 = (int)*(char *)(param_2 + iVar4);
      if (iVar1 < 100) {
        if (iVar1 < 99) {
          if (iVar1 < 0x62) {
            if (iVar1 < 0x61) {
              if (iVar1 - 0x30U < 0x17) {
                uVar2 = (*(code *)((int)&switchD_02152688::switchdataD_0215268a +
                                  (int)(short)(&switchD_02152688::switchdataD_0215268a)
                                              [iVar1 - 0x30U]))();
                return uVar2;
              }
              return 0;
            }
          }
          else if (iVar1 != 0x62) {
            return 0;
          }
        }
      }
      else if (iVar1 < 0x66) {
        if ((iVar1 < 0x65) && (iVar1 != 100)) {
          return 0;
        }
      }
      else if (iVar1 != 0x66) {
        return 0;
      }
      iVar3 = iVar3 + iVar1 + -0x57;
      FUN_0200d12c(iVar4,2);
      if (extraout_r1 == 0) {
        iVar3 = iVar3 * 0x10;
      }
      else {
        iVar1 = FUN_0200d12c(iVar4,2);
        *(char *)(param_1 + iVar1) = (char)iVar3;
        iVar3 = local_1c;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  return 1;
}

