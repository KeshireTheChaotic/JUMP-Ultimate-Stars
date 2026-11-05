
void FUN_02151c64(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_r3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  FUN_02043264(1);
  FUN_02041f7c(DAT_020a0f64,0);
  iVar1 = FUN_0203b414(0);
  local_c = 0x1000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_c);
  iVar1 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x40,0x20);
  iVar1 = FUN_0203b414(1);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x4000);
  iVar1 = FUN_0203b414(1);
  local_10 = 0;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_10);
  return;
}

