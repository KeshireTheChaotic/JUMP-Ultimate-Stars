
void FUN_0215c10c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [20];
  undefined2 local_14;
  
  iVar1 = FUN_0214f898(param_3,0x6d6e5053);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      return;
    }
    iVar1 = FUN_0203b404();
    uVar3 = *(undefined4 *)(iVar1 + 0x88);
    uVar2 = FUN_02150f0c();
    iVar1 = FUN_02151178(uVar3,uVar2,6,0xa0);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x6d6e5053;
    local_30 = 0;
    local_2c = 0xa000;
    FUN_0214f218(iVar1,&local_2c,&local_30);
    FUN_02152468(iVar1,param_3);
    FUN_0214f48c(param_3,iVar1);
  }
  piVar4 = *(int **)(iVar1 + 4);
  (**(code **)(*(int *)piVar4[0x19] + 0x70))();
  (**(code **)(*piVar4 + 0xc4))();
  if (param_4 != 0) {
    FUN_02051890(param_4,auStack_28,0x14);
    local_14 = 0;
    piVar4 = *(int **)(*(int *)(iVar1 + 4) + 100);
    (**(code **)(*piVar4 + 0x6c))(piVar4,auStack_28,0xffffffff);
  }
  return;
}

