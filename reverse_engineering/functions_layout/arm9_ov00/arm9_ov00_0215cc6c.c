
void FUN_0215cc6c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0214e27c(&local_28,*(undefined4 *)(iVar3 + 0xb4));
  if (0x118000 < local_28) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215cdb8);
    piVar1 = *(int **)(*(int *)(iVar3 + 0xb4) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    FUN_020282f4(*(undefined4 *)(*(int *)(iVar3 + 0xb4) + 4));
    *(undefined4 *)(iVar3 + 0xc4) = 0x1199;
    local_34 = 0;
    local_30 = 0x60000;
    local_2c = 0x80000;
    FUN_02151038(auStack_18,&local_2c,&local_30,&local_34);
    iVar2 = FUN_02155b08(*(undefined4 *)(iVar3 + 0x50),0x564d5049,0);
    FUN_02013c48(*(undefined4 *)(iVar2 + 4),auStack_18,0);
    piVar1 = *(int **)(*(int *)(iVar3 + 0x16c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    FUN_020282f4(*(undefined4 *)(*(int *)(iVar3 + 0x16c) + 4));
    *(undefined4 *)(iVar3 + 0x17c) = 0x1199;
    local_40 = 0;
    local_3c = 0x60000;
    local_38 = 0x80000;
    FUN_02151038(auStack_24,&local_38,&local_3c,&local_40);
    iVar3 = FUN_02155b08(*(undefined4 *)(iVar3 + 0x108),0x564d5049,0);
    FUN_02013c48(*(undefined4 *)(iVar3 + 4),auStack_24,0);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215ce88);
  }
  return;
}

