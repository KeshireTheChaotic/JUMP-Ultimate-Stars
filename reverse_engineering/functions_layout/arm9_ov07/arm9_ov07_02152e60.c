
void FUN_02152e60(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int iStack_18;
  
  iStack_18 = param_4;
  iVar1 = FUN_0214f898(param_3,0x6d6e5053);
  if (iVar1 == 0) {
    iVar1 = FUN_0203b404();
    FUN_02150e78(*(undefined4 *)(iVar1 + 0x88));
    iVar1 = FUN_02150f0c();
    func_0x021c5fb4(*(undefined4 *)(iVar1 + 4));
    iVar1 = FUN_0214f340();
    piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
    (**(code **)(*piVar2 + 0xa8))(piVar2,0);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x6d6e5053;
    local_20 = 0x8000;
    local_1c = 0x18000;
    FUN_0214f218(iVar1,&local_1c,&local_20);
    local_24 = 0xa0000;
    FUN_0214f27c(iVar1,&local_24);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_02152468(iVar1,param_3);
    FUN_02150eb4();
    FUN_0214f48c(param_3,iVar1);
  }
  piVar2 = *(int **)(iVar1 + 4);
  (**(code **)(*(int *)piVar2[0x19] + 0x70))();
  (**(code **)(*piVar2 + 0xc4))();
  if (param_4 != 0) {
    iVar3 = param_1 + 0x1f2 + param_2 * 0x16;
    FUN_02051890(param_4,iVar3,0x14);
    *(undefined2 *)(iVar3 + 0x14) = 0;
    piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
    (**(code **)(*piVar2 + 0x6c))(piVar2,iVar3,0xffffffff);
  }
  return;
}

