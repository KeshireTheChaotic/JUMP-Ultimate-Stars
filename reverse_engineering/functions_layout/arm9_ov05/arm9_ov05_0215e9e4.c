
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0215e9e4(undefined4 param_1,int *param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((char)param_2[8] == '\0') {
    iVar1 = ALWidgetImp::Create(param_1,_DAT_021d5154);
  }
  else {
    iVar1 = ALWidgetImp::Create();
  }
  if (param_3 != 0) {
    piVar3 = *(int **)(param_3 + 4);
    (**(code **)(**(int **)(iVar1 + 4) + 0xb4))(*(int **)(iVar1 + 4),piVar3);
    (**(code **)(*piVar3 + 0xc))();
  }
  piVar3 = (int *)jus_AllocDebug(0x70,s_ALCollision_inl_0216f8b4,s_Create_021706cc,0x1b2);
  if (piVar3 != (int *)0x0) {
    func_0x021b054c(piVar3,0,&DAT_02093c8c);
    *piVar3 = (int)&jus_Class_0216f578::vftable;
    FUN_021509e4(piVar3 + 0x1a,param_2 + 5);
    *piVar3 = 0x21d1c58;
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  FUN_02020e98(iVar1,piVar3[6]);
  local_24 = param_4 << 0xc;
  FUN_0214d494(iVar1,&local_24);
  local_2c = (int)*(short *)((int)param_2 + 0x12) << 0xc;
  local_28 = (int)(short)param_2[4] << 0xc;
  FUN_0214ce68(iVar1,&local_28,&local_2c);
  if (param_2[3] != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 4) + 0xaa) = 1;
    func_0x021b77a8(*(undefined4 *)(iVar1 + 4),param_2[3]);
    *(undefined1 *)(*(int *)(iVar1 + 4) + 0xab) = 0;
  }
  if (param_3 == 0) {
    if (param_2[7] != 0) {
      func_0x021b65e8(*(undefined4 *)(iVar1 + 4),4);
    }
  }
  else {
    if (param_2[7] != 0) {
      func_0x021b6760(*(undefined4 *)(iVar1 + 4),4);
    }
    if (param_5 != '\0') {
      FUN_02023940(*(undefined4 *)(iVar1 + 4));
      piVar3 = *(int **)(param_3 + 4);
      uVar2 = FUN_020326b0(s_PatternNo_0217071c);
      uVar2 = (**(code **)(*piVar3 + 0x40))(piVar3,s_PatternNo_0217071c,&local_30,uVar2);
      FUN_0202c4a4(&local_20,uVar2,local_30);
      FUN_0214d4bc(param_3,param_2[1] - *param_2);
      FUN_02023c60(*(undefined4 *)(iVar1 + 4),local_20,0,local_1c);
      piVar3 = *(int **)(*(int *)(iVar1 + 4) + 0x68);
      (**(code **)(*piVar3 + 0xac))(piVar3,0);
      FUN_02023c70(*(undefined4 *)(iVar1 + 4),param_2[1]);
      FUN_020239a0(*(undefined4 *)(iVar1 + 4));
      FUN_0214d4bc(param_3,param_2[2] - *param_2);
      FUN_02023c60(*(undefined4 *)(iVar1 + 4),local_20,0,local_1c);
      piVar3 = *(int **)(*(int *)(iVar1 + 4) + 0x68);
      (**(code **)(*piVar3 + 0xac))(piVar3,0);
      FUN_02023c70(*(undefined4 *)(iVar1 + 4),param_2[2]);
    }
    FUN_02023894(*(undefined4 *)(iVar1 + 4),param_2[1],0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    func_0x021b3f78(*(undefined4 *)(iVar1 + 4),param_2[1]);
    func_0x021b3fb0(*(undefined4 *)(iVar1 + 4),param_2[1]);
    func_0x021b3fc4(*(undefined4 *)(iVar1 + 4),param_2[2]);
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  return iVar1;
}

