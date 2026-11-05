
undefined4 FUN_02078038(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(DAT_0214bd80 + 0x1912) == '\0') {
    uVar2 = 1;
  }
  else if ((*(uint *)(param_2 + 0x3c) & 0x1000) == 0) {
    if (*(int *)(param_1 + 0x570) == param_2) {
      uVar2 = 1;
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x5e8))
                        (param_1,*(undefined4 *)(param_1 + 0x5ec),8,*(undefined1 *)(param_2 + 0x42),
                         0,0);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x570) == 0) {
          if (*(char *)(param_1 + 0x5ce) == '\0') {
            if (*(char *)(param_1 + 0x5cf) == '\0') {
              iVar3 = FUN_020782f4(param_1,1);
              if (iVar3 == 0) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
            }
            else {
              bVar1 = true;
            }
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

