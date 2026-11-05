
void FUN_0206be84(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(iVar2 + 0x10))
                    (iVar2,(int)*(short *)(iVar2 + 0x68),(int)*(short *)(iVar2 + 0x6a));
  if (iVar1 == 0) {
    FUN_0206bee8(iVar2);
  }
  FUN_0206bf14(iVar2);
  return;
}

