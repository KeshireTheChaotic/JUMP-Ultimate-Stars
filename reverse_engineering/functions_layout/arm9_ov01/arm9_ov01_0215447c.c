
void FUN_0215447c(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  int local_2c [6];
  
  local_2c[5] = in_r3;
  FUN_02043264(1);
  FUN_0203d4e4();
  iVar1 = FUN_0203b414(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0);
  iVar1 = FUN_0203b414(0);
  local_2c[4] = 0x1000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,local_2c + 4);
  iVar1 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x20);
  iVar1 = FUN_0203b414(1);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x8000);
  iVar1 = FUN_0203b414(1);
  local_2c[3] = 0x3000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,local_2c + 3);
  iVar1 = FUN_0203b414(1);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,1);
  iVar1 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x40,0x20);
  iVar1 = FUN_0203b414(2);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x4000);
  iVar1 = FUN_0203b414(2);
  local_2c[2] = 0x2000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,local_2c + 2);
  iVar1 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x40);
  iVar1 = FUN_0203b414(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x90))(piVar2,0x4000);
  iVar1 = FUN_0203b414(3);
  local_2c[1] = 0;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,local_2c + 1);
  iVar1 = 0;
  do {
    iVar3 = FUN_0203b424(iVar1);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
    iVar3 = FUN_0203b424(iVar1);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
    iVar3 = FUN_0203b424(iVar1);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0,0);
    iVar3 = FUN_0203b424(iVar1);
    piVar2 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
    iVar3 = FUN_0203b424(iVar1);
    local_2c[0] = iVar1 << 0xc;
    piVar2 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x10))(piVar2,local_2c);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if ((DAT_0216de40 & 1) == 0) {
    FUN_0214dc98(&DAT_0216c1ac,0x100,0x2c,0x100,0xac);
    DAT_0216de40 = DAT_0216de40 | 1;
  }
  iVar1 = FUN_0203b3e4();
  iVar3 = *(int *)(iVar1 + 0x88);
  FUN_02150768(iVar3,0,&DAT_0216c1ac);
  iVar1 = *(int *)(iVar3 + 4);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  *(undefined1 *)(iVar1 + 0x8fd) = 1;
  iVar1 = *(int *)(iVar3 + 4);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  *(undefined4 *)(iVar1 + 0x8c8) = 9;
  *(undefined4 *)(iVar1 + 0x8c8) = 9;
  iVar1 = *(int *)(iVar3 + 4);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  *(undefined4 *)(iVar1 + 0x8d4) = 0x1e;
  iVar1 = *(int *)(iVar3 + 4);
  *(undefined1 *)(iVar1 + 0x8ff) = 1;
  *(undefined1 *)(iVar1 + 0x901) = 1;
  FUN_021500b0(iVar3,0);
  return;
}

