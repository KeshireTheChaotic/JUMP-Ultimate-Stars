
void FUN_0214dbac(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack00000000;
  undefined4 uStack00000004;
  
  FUN_0203d0b4(*(undefined4 *)(*(int *)(param_1 + 0x88) + 4),1);
  iVar1 = FUN_0203b424(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b424(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x40,0x20);
  iVar1 = FUN_0203b424(2);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x4000);
  iVar1 = FUN_0203b424(2);
  uStack00000004 = 0x2000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&uStack00000004);
  iVar1 = FUN_0203b424(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b424(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b424(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x20);
  iVar1 = FUN_0203b424(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x8000);
  iVar1 = FUN_0203b424(3);
  uStack00000000 = 0x3000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&uStack00000000);
  return;
}

