
void FUN_021586ac(int *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar2 = (uint)*(byte *)((int)param_1 + 0x9d);
  uVar1 = (uint)*(byte *)(param_1 + 0x26);
  bVar3 = uVar2 == uVar1;
  if (bVar3) {
    uVar2 = (uint)(char)param_1[0x28];
    uVar1 = (uint)*(char *)((int)param_1 + 0x9b);
  }
  bVar4 = bVar3 && uVar2 == uVar1;
  if (bVar3 && uVar2 == uVar1) {
    bVar4 = *(char *)((int)param_1 + 0x9e) == *(char *)((int)param_1 + 0x99);
  }
  bVar3 = false;
  if (bVar4) {
    bVar3 = *(char *)((int)param_1 + 0x9f) == *(char *)((int)param_1 + 0x9a);
  }
  if (!bVar3) {
    FUN_02071e24(*(undefined1 *)((int)param_1 + 0x9d));
    FUN_02071ea8((&DAT_021600fc)[*(byte *)((int)param_1 + 0x9e)]);
    FUN_02071ed8((&DAT_021600fc)[*(byte *)((int)param_1 + 0x9f)]);
    FUN_02071ad4((int)(char)param_1[0x28]);
  }
  FUN_02073ebc(3,1);
  FUN_02028330(*(undefined4 *)(*param_1 + 4));
  FUN_02028384(*(undefined4 *)(*param_1 + 4),FUN_02157edc);
  func_0x021b65bc();
  return;
}

