
void FUN_02150344(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((param_2 & 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x124);
    if (iVar1 == 4) {
      iVar1 = 0;
      do {
        if (4 < iVar1) {
          uVar3 = 0;
LAB_02150380:
          *param_3 = uVar3;
          return;
        }
        iVar2 = FUN_02150328(*(undefined4 *)(iVar4 + iVar1 * 4 + 0x5c));
        if (iVar2 != 0) {
          uVar3 = *(undefined4 *)(iVar4 + (iVar1 + 8) * 4 + 0x3c);
          goto LAB_02150380;
        }
        iVar1 = iVar1 + 1;
      } while( true );
    }
    if (iVar1 == 5) {
      for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
        iVar2 = FUN_02150328(*(undefined4 *)(iVar4 + iVar1 * 4 + 0x70));
        if (iVar2 != 0) {
          uVar3 = *(undefined4 *)(iVar4 + (iVar1 + 0xd) * 4 + 0x3c);
          goto LAB_021503ac;
        }
      }
      uVar3 = 0;
LAB_021503ac:
      *param_3 = uVar3;
    }
  }
  return;
}

