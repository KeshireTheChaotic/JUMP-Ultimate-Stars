
void FUN_02153eb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar5 = *(int *)(*(int *)(iVar4 + 0x330) + 0x38) + *(int *)(*(int *)(param_1 + 4) + 0x124) * 0x40;
  uStack_18 = param_4;
  FUN_0207342c(0x7b,2);
  func_0x021b65bc();
  iVar2 = FUN_02153588(*(undefined4 *)(iVar4 + 0x14));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  iVar2 = FUN_02153588(*(undefined4 *)(iVar4 + 0x18));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  iVar2 = FUN_02153588(param_1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0x18) + 4),0);
  iVar2 = FUN_02151454(*(undefined4 *)(iVar4 + 0xc),0x564d5049,0);
  (**(code **)(**(int **)(iVar2 + 4) + 0x9c))(*(int **)(iVar2 + 4),0x10);
  local_30 = 0x3000;
  local_2c = 0x3000;
  local_28 = 0x3000;
  FUN_0214e39c(auStack_24,&local_28,&local_2c,&local_30);
  FUN_02013c48(*(undefined4 *)(iVar2 + 4),auStack_24,0);
  FUN_02154068(4);
  func_0x021b65cc();
  if (*(char *)(iVar5 + 0x2f) == -1) {
    *(char *)(*(int *)(iVar4 + 0x330) + 0x53) = (char)*(undefined4 *)(*(int *)(param_1 + 4) + 0x124)
    ;
    uVar3 = (uint)*(char *)(iVar5 + 0x2e);
    if ((uVar3 == 0xffffffff) ||
       ((*(uint *)(&DAT_020b0cd4 + (uVar3 >> 5) * 4) & 1 << (uVar3 & 0x1f)) != 0)) {
      FUN_0214d348(*(undefined4 *)(iVar4 + 0x330),2);
    }
    else {
      FUN_0214d348(*(undefined4 *)(iVar4 + 0x330),5);
    }
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x330);
    uVar1 = *(undefined1 *)(*(char *)(iVar5 + 0x2f) * 0x48 + *(int *)(iVar2 + 0x34) + 0x42);
    *(undefined1 *)(iVar2 + 0x50) = *(undefined1 *)(iVar2 + 0x51);
    *(undefined1 *)(iVar2 + 0x51) = uVar1;
    *(undefined1 *)(*(int *)(iVar4 + 0x330) + 0x52) = *(undefined1 *)(iVar5 + 0x2f);
    *(undefined1 *)(iVar4 + 0x35c) = *(undefined1 *)(iVar5 + 0x2f);
    FUN_0214d348(*(undefined4 *)(iVar4 + 0x330),3);
  }
  return;
}

