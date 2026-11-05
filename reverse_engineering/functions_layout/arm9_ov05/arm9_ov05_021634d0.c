
void FUN_021634d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_02163804(param_1,0,1);
  FUN_02163694(*(undefined4 *)(param_1 + 0xc4),uVar1);
  uVar1 = FUN_02163784(param_1,4,1);
  FUN_021636d0(*(undefined4 *)(param_1 + 0xc4),uVar1);
  for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
    iVar3 = FUN_02152d80(*(undefined4 *)(param_1 + iVar2 * 0xc + 200));
    if (iVar3 == 0) {
      FUN_0216370c(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + iVar2 * 0xc + 200));
      break;
    }
  }
  iVar2 = 0;
  do {
    if (4 < iVar2) {
LAB_02163594:
      iVar2 = 0;
      do {
        iVar3 = iVar2 * 0xc + param_1;
        iVar4 = 0;
        do {
          uVar1 = FUN_02163784(param_1,iVar2 + -1,iVar4);
          FUN_021636d0(*(undefined4 *)(iVar3 + iVar4 * 4 + 200),uVar1);
          uVar1 = FUN_02163804(param_1,iVar2 + 1,iVar4);
          FUN_02163694(*(undefined4 *)(iVar3 + iVar4 * 4 + 200),uVar1);
          if (iVar4 == 0) {
            uVar1 = FUN_021644e8(param_1,iVar2,2);
            FUN_0216370c(*(undefined4 *)(iVar3 + 200),uVar1);
          }
          else {
            uVar1 = FUN_021644e8(param_1,iVar2,iVar4 + -1);
            FUN_0216370c(*(undefined4 *)(iVar3 + iVar4 * 4 + 200),uVar1);
          }
          if (iVar4 == 2) {
            uVar1 = FUN_021644e8(param_1,iVar2,0);
            FUN_02163748(*(undefined4 *)(iVar3 + 0xd0),uVar1);
          }
          else {
            uVar1 = FUN_021644e8(param_1,iVar2,iVar4 + 1);
            FUN_02163748(*(undefined4 *)(iVar3 + iVar4 * 4 + 200),uVar1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 5);
      return;
    }
    iVar3 = FUN_02152d80(*(undefined4 *)(param_1 + iVar2 * 0xc + 0xd0));
    if (iVar3 == 0) {
      FUN_02163748(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + iVar2 * 0xc + 0xd0));
      goto LAB_02163594;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

