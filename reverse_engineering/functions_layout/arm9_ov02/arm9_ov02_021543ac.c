
void FUN_021543ac(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar5 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
  iVar3 = *(int *)(*(int *)(iVar4 + 0x330) + 0x34);
  *(char *)(iVar4 + 0x35c) = (char)uVar5;
  iVar3 = uVar5 * 0x48 + iVar3;
  iVar1 = FUN_02153808(iVar4,uVar5 & 0xff);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0xdc + iVar1 * 0x28) + 4),1);
  *(char *)(iVar4 + 0x35e) =
       (char)*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0xdc + iVar1 * 0x28) + 4) + 0x124);
  FUN_021518d4(&local_20);
  local_24 = ((int)*(short *)(iVar4 + 0x354) - (int)*(short *)(iVar3 + 0x2c)) * 0x1000;
  FUN_02153260(&local_24,iVar4 + 0x344);
  local_20 = local_24;
  local_28 = ((int)*(short *)(iVar4 + 0x356) - (int)*(short *)(iVar3 + 0x2e)) * 0x1000;
  FUN_02153260(&local_28,iVar4 + 0x344);
  local_1c = local_28;
  FUN_02154390(iVar4 + 0x348,&local_20);
  iVar1 = FUN_02151454(*(undefined4 *)(iVar4 + 8),0x564d5049,0);
  FUN_02013c48(*(undefined4 *)(iVar1 + 4),&local_20,0);
  iVar1 = *(short *)(iVar4 + 0x358) * 0x1000 - local_20;
  *(short *)(iVar4 + 0x358) = (short)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc);
  iVar1 = *(short *)(iVar4 + 0x35a) * 0x1000 - local_1c;
  *(short *)(iVar4 + 0x35a) = (short)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc);
  local_2c = 0x999;
  FUN_021539d4(iVar4,*(undefined1 *)(iVar4 + 0x35c),&local_2c,iVar3 + 0x2c);
  FUN_02154354(*(undefined4 *)(iVar4 + 0x20));
  piVar2 = *(int **)(*(int *)(*(int *)(iVar4 + 0x20) + 4) + 100);
  (**(code **)(*piVar2 + 0x68))(piVar2,iVar3);
  local_30 = 0x8000;
  FUN_0214ef60(*(undefined4 *)(iVar4 + 0x20),&local_30);
  piVar2 = *(int **)(*(int *)(iVar4 + 0x4c) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  FUN_0215384c(iVar4);
  return;
}

