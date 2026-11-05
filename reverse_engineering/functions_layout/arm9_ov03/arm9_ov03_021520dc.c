
void FUN_021520dc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_r10;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  
  FUN_0202c498();
  FUN_0203b404();
  iVar1 = ALWidgetImp::Create();
  FUN_02023894(*(undefined4 *)(iVar1 + 4),0x820011,0);
  func_0x021b4034(*(undefined4 *)(iVar1 + 4),0x820011);
  func_0x021b3f78(*(undefined4 *)(iVar1 + 4),0x820012);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))();
  func_0x021b6760(*(undefined4 *)(iVar1 + 4),0x10,FUN_02152568);
  uStack00000024 = 0x60000;
  uStack00000020 = 0xa4000;
  FUN_0214e990(iVar1,&uStack00000020,&uStack00000024);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 4;
  *(int *)(unaff_r10 + 0x40) = iVar1;
  iVar1 = ALWidgetBaseImp::Create();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 0x103;
  *(int *)(unaff_r10 + 0x2c) = iVar1;
  iVar2 = FUN_0203b404();
  iVar1 = ALWidgetImp::Create(iVar1,*(undefined4 *)(iVar2 + 0x88),0x820000,0x19);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 5;
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  *(int *)(unaff_r10 + 0x44) = iVar1;
  uVar3 = func_0x021bcf1c(5,1,1,0xffffffff);
  *(undefined4 *)(unaff_r10 + 0x48) = uVar3;
  func_0x021bd730(uVar3,0x36,0);
  FUN_02073ebc(2,1);
  if (*(int *)(unaff_r10 + 0x24) != 0) {
    piVar4 = *(int **)(*(int *)(unaff_r10 + 0x24) + 4);
    (**(code **)(*piVar4 + 0x148))(piVar4,0x10);
  }
  return;
}

