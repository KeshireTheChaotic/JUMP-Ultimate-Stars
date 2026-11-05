
void FUN_02159ee4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(**(int **)(param_1 + 4) + 0x170);
  (*pcVar2)(*(int **)(param_1 + 4),0,pcVar2,param_4,param_4);
  iVar1 = FUN_0214ed84();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),1);
  return;
}

