
void FUN_021532c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = ALWidgetBaseImp::Create();
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 0x100;
  *(int *)(param_1 + 0x38) = iVar1;
  local_20 = 0x100;
  local_1c = 0xc0;
  iVar2 = FUN_0203b3f4();
  iVar2 = ALWidgetImp::Create(iVar1,*(undefined4 *)(iVar2 + 0x88),0x510000,0x14,0x20,&local_20);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xab) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar2 + 4),0x10);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  piVar3 = (int *)jus_AllocDebug(0x70,s_ALCollision_inl_0215dc0c,s_Create_0215e158,0x1b2);
  if (piVar3 != (int *)0x0) {
    func_0x021b054c(piVar3,0,&DAT_02093c8c);
    *piVar3 = (int)&jus_Class_0215db68::vftable;
    FUN_0214e8a8(piVar3 + 0x1a,&DAT_0215e160);
    *piVar3 = 0x21d1c58;
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  FUN_02020e98(iVar2,piVar3[6]);
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),4,FUN_0215499c);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),4,FUN_021549b4);
  FUN_02023894(*(undefined4 *)(iVar2 + 4),0x510014,0);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0x510014);
  func_0x021b3fc4(*(undefined4 *)(iVar2 + 4),0x510015);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 2;
  func_0x021b65d8(*(undefined4 *)(iVar2 + 4));
  *(int *)(param_1 + 0x1a0) = iVar2;
  local_20 = 0x80;
  local_1c = 0;
  iVar2 = FUN_0203b3e4();
  iVar1 = ALWidgetImp::Create(iVar1,*(undefined4 *)(iVar2 + 0x88),0x851000,
                              *(undefined4 *)(&DAT_0215d500 + (uint)*(byte *)(param_1 + 2) * 4),0x20
                              ,&local_20);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 1;
  *(int *)(param_1 + 0x19c) = iVar1;
  return;
}

