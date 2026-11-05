
int FUN_0215e800(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x14))();
  if ((iVar1 != 0) && (pcVar2 = *(code **)(*(int *)(param_1 + 0x20) + 8), pcVar2 != (code *)0x0)) {
    (*pcVar2)(5,param_1 + 0x10);
  }
  return iVar1;
}

