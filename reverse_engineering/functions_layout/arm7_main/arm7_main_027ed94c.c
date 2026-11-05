
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027ed94c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  iVar1 = _DAT_0380fff4;
  puVar4 = (undefined2 *)(_DAT_0380fff4 + 0x404);
  *(undefined2 *)(param_2 + 2) = 0x12;
  if (*(short *)(_DAT_0380fff4 + 0x34c) == 0x20) {
    if (*(ushort *)(param_1 + 0x12) < 4) {
      if (*(ushort *)(param_1 + 0x14) < 0x40) {
        if (*(ushort *)(param_1 + 0x16) == 0) {
          uVar2 = 5;
        }
        else if (*(ushort *)(param_1 + 0x16) < 0x3e9) {
          uVar5 = 0;
          while ((uVar5 < 0x10 && (iVar3 = FUN_027e93b0(param_1 + 0x18 + uVar5), iVar3 != 0))) {
            iVar3 = FUN_027e9cdc();
            if (iVar3 == 0) {
              return 5;
            }
            uVar5 = uVar5 + 1;
          }
          if (uVar5 == 0) {
            uVar2 = 5;
          }
          else {
            *(int *)(iVar1 + 0x41c) = param_1;
            *(int *)(iVar1 + 0x420) = param_2;
            *puVar4 = 0x80;
            *(undefined2 *)(param_2 + 4) = 0x80;
            FUN_027ed04c();
            uVar2 = 0x80;
          }
        }
        else {
          uVar2 = 5;
        }
      }
      else {
        uVar2 = 5;
      }
    }
    else {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

