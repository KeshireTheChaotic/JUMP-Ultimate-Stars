
void FUN_0215ea2c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  do {
    if (1 < iVar3) {
      bVar1 = true;
LAB_0215ea90:
      if (bVar1) {
        FUN_0215e9a4(iVar4,0);
        *(undefined1 *)(iVar4 + 0x10) = 1;
        FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215e9fc);
        return;
      }
      return;
    }
    iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar4 + iVar3 * 4 + 8) + 4) + 0x68) + 0x68))()
    ;
    if (iVar2 == 0) {
      bVar1 = false;
      goto LAB_0215ea90;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

