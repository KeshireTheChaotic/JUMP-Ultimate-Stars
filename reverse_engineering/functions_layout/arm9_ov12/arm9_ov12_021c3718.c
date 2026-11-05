
void FUN_021c3718(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_70;
  undefined4 local_64;
  int local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  int local_48 [4];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 8) + 4),1,0);
  local_70 = 0x46;
  iVar7 = 0x810003;
  iVar6 = 0x55;
  iVar1 = FUN_021c38b8(param_2,param_3);
  if (iVar1 != 0) {
    iVar7 = 0x810004;
    local_70 = 0x36;
    iVar6 = 0x45;
  }
  iVar1 = param_3 * 0xa4;
  if (*(char *)(*(int *)(param_2 + 4) + iVar1 + 0x77) != -1) {
    iVar7 = iVar7 + 2;
  }
  iVar2 = FUN_0203b404();
  uVar3 = FUN_021c4644(0x810000,iVar7,0x81,*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(iVar2 + 0x88));
  local_48[2] = 0x60000;
  local_48[3] = 0x80000;
  FUN_021bb970(uVar3,local_48 + 3,local_48 + 2);
  local_4c = 0;
  local_48[0] = local_70 << 0xc;
  local_48[1] = 0xc000;
  FUN_021c3414(auStack_20,local_48 + 1,local_48,&local_4c);
  iVar7 = FUN_021c4588(param_1,auStack_20,6);
  FUN_021b87e0(*(undefined4 *)(param_1 + 8),iVar7);
  FUN_021c38d8(iVar7,*(undefined4 *)(param_1 + 8));
  piVar4 = *(int **)(*(int *)(iVar7 + 4) + 100);
  (**(code **)(*piVar4 + 0x68))(piVar4,*(int *)(param_2 + 4) + iVar1);
  iVar7 = FUN_021c38b8(param_2,param_3);
  if (iVar7 != 0) {
    uVar8 = 0;
    do {
      local_60[2] = 0;
      local_60[3] = iVar6 << 0xc;
      local_50 = 0xc000;
      FUN_021c3414(auStack_2c,&local_50,local_60 + 3,local_60 + 2);
      iVar7 = FUN_021c4588(param_1,auStack_2c,0);
      FUN_021b87e0(*(undefined4 *)(param_1 + 8),iVar7);
      FUN_021c38d8(iVar7,*(undefined4 *)(param_1 + 8));
      piVar4 = *(int **)(*(int *)(iVar7 + 4) + 100);
      (**(code **)(*piVar4 + 0x68))
                (piVar4,*(int *)(param_2 + 4) + iVar1 + 0x20 + (uVar8 & 0xff) * 0x28);
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 0x10;
    } while ((int)uVar8 < 2);
  }
  uVar3 = func_0x021643a4();
  iVar7 = 0;
  do {
    local_64 = 0;
    local_60[0] = iVar6 << 0xc;
    local_60[1] = 0xc000;
    FUN_021c3414(auStack_38,local_60 + 1,local_60,&local_64);
    iVar2 = FUN_021c4588(param_1,auStack_38,0);
    FUN_021b87e0(*(undefined4 *)(param_1 + 8),iVar2);
    FUN_021c38d8(iVar2,*(undefined4 *)(param_1 + 8));
    uVar5 = func_0x02164454(uVar3,*(undefined1 *)(iVar1 + *(int *)(param_2 + 4) + 0x76),iVar7);
    piVar4 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar4 + 0x68))(piVar4,uVar5);
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar7 < 3);
  func_0x0216442c(uVar3);
  return;
}

