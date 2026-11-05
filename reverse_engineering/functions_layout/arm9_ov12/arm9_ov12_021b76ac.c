
int FUN_021b76ac(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (*(uint *)(param_1 + 0x11c) <= uVar3) {
LAB_021b76e6:
      uVar3 = 0;
      while( true ) {
        if (DAT_021d5184 <= uVar3) {
          return -2;
        }
        uVar2 = *(uint *)(DAT_021d5180 + uVar3 * 8);
        if (uVar2 == (uVar2 & param_2)) break;
        uVar3 = uVar3 + 1;
      }
      return *(int *)(DAT_021d5180 + uVar3 * 8 + 4);
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0x118) + uVar3 * 8);
    if (uVar2 == (uVar2 & param_2)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x118) + uVar3 * 8 + 4);
      if (iVar1 == -2) {
        return -2;
      }
      if (iVar1 != -1) {
        return iVar1;
      }
      goto LAB_021b76e6;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

