
void FUN_0215a8a0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  
  iVar1 = FUN_0203b404();
  uVar2 = ALWidgetImp::Create(param_2,*(undefined4 *)(iVar1 + 0x88),3,0x830000,4,0x10,0x18,0x6e);
  *param_1 = uVar2;
  FUN_021501e4(uVar2,(int)(short)param_3,(int)(short)param_4);
  FUN_02150270(*param_1,*(undefined1 *)(param_1 + 1));
  FUN_02150160(*param_1,0xe,0x20,0x10,0,0);
  if (*(char *)(param_1 + 1) == *(char *)((int)param_1 + 5)) {
    local_1c = param_3 + 0x10;
    local_18 = param_4 + -0x20;
    iVar1 = FUN_0203b404();
    iVar1 = FUN_0214ee60(param_2,*(undefined4 *)(iVar1 + 0x88),0x830000,0xf,0x6d,&local_1c);
    FUN_02023940(*(undefined4 *)(iVar1 + 4));
    piVar3 = *(int **)(iVar1 + 4);
    uVar2 = FUN_020326b0(&DAT_021614f4);
    uVar2 = (**(code **)(*piVar3 + 0x40))(piVar3,&DAT_021614f4,&local_28,uVar2);
    FUN_0202c4a4(&local_24,uVar2,local_28);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
    FUN_02023c60(*(undefined4 *)(iVar1 + 4),local_24,0,local_20);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_02023c60(*(undefined4 *)(iVar1 + 4),local_24,param_5,local_20);
    piVar3 = *(int **)(*(int *)(iVar1 + 4) + 0x68);
    (**(code **)(*piVar3 + 0xac))(piVar3,0);
    FUN_02023c70(*(undefined4 *)(iVar1 + 4),1);
    func_0x021b4034(*(undefined4 *)(iVar1 + 4),1);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  }
  return;
}

