
void FUN_02087a14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="CommWrap.cpp" */
  if (DAT_0214be24 != 0) {
    iVar2 = FUN_0208c51c();
    if (iVar2 == 0) {
      cVar1 = FUN_020587f4();
    }
    else {
      cVar1 = func_0x0219ad0c();
    }
    iVar2 = DAT_0214be24;
    if (*(char *)(DAT_0214be24 + 4) != cVar1) {
      *(char *)(DAT_0214be24 + 4) = cVar1;
      FUN_02023894(*(undefined4 *)(param_1 + 4),*(char *)(DAT_0214be24 + 4) + 0xc00100,0,iVar2,
                   param_4);
      (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),1);
    }
    FUN_02087de0();
  }
  return;
}

