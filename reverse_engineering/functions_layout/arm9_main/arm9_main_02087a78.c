
void FUN_02087a78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
                    /* JUS-TAG source_file_inferred="CommWrap.cpp" */
  uStack_10 = param_4;
  iVar1 = FUN_0208c51c();
  if ((iVar1 != 0) && (DAT_0214be24 != 0)) {
    iVar1 = func_0x0219bce8();
    if (iVar1 == 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
      iStack_18 = (int)*(short *)(DAT_0214be24 + 0x1e) << 0xc;
      iStack_14 = (int)*(short *)(DAT_0214be24 + 0x1c) << 0xc;
      FUN_0206c9f8(param_1,&iStack_14,&iStack_18);
    }
    else {
      if (*(char *)(DAT_0214be24 + 6) != *(char *)(DAT_0214be24 + 5)) {
        *(char *)(DAT_0214be24 + 5) = *(char *)(DAT_0214be24 + 6);
        FUN_02023894(*(undefined4 *)(param_1 + 4),*(char *)(DAT_0214be24 + 5) + 0xc00200,0);
        (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x68) + 0x6c))();
      }
      (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),1);
      iVar3 = (int)*(short *)(DAT_0214be24 + 0x22);
      iVar2 = (int)*(short *)(DAT_0214be24 + 0x20);
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x50);
      iVar4 = *(int *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      iVar4 = (int)(iVar4 + ((uint)(iVar4 >> 0xb) >> 0x14)) >> 0xc;
      iVar1 = (int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc;
      iStack_20 = iVar4;
      if (iVar4 != iVar2) {
        if (iVar4 < iVar2) {
          iStack_20 = iVar4 + 4;
          if (iVar2 < iVar4 + 4) {
            iStack_20 = iVar2;
          }
        }
        else {
          iStack_20 = iVar4 + -4;
          if (iVar4 + -4 < iVar2) {
            iStack_20 = iVar2;
          }
        }
      }
      iStack_1c = iVar1;
      if (iVar1 != iVar3) {
        if (iVar1 < iVar3) {
          iStack_1c = iVar1 + 4;
          if (iVar3 < iVar1 + 4) {
            iStack_1c = iVar3;
          }
        }
        else {
          iStack_1c = iVar1 + -4;
          if (iVar1 + -4 < iVar3) {
            iStack_1c = iVar3;
          }
        }
      }
      iStack_1c = iStack_1c << 0xc;
      iStack_20 = iStack_20 << 0xc;
      FUN_0206c9f8(param_1,&iStack_20,&iStack_1c);
    }
  }
  return;
}

