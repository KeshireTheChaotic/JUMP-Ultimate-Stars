
void FUN_0215c308(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_28 [4];
  undefined1 local_24;
  int local_20;
  undefined4 local_1c [4];
  undefined4 local_c;
  
  local_1c[0] = DAT_0216aa40;
  local_1c[1] = DAT_0216aa44;
  local_1c[2] = DAT_0216aa48;
  local_1c[3] = DAT_0216aa4c;
  local_c = DAT_0216aa50;
  local_28[0] = DAT_0216aa24;
  local_28[1] = DAT_0216aa25;
  local_28[2] = DAT_0216aa26;
  local_28[3] = DAT_0216aa27;
  local_24 = DAT_0216aa28;
  DAT_0216e77c = (undefined4 *)FUN_02166b8c(0x18,4);
  FUN_02157038(&local_20,0);
  (*(code *)local_1c[local_20])(DAT_0216e77c + 2);
  puVar1 = DAT_0216e77c;
  iVar2 = FUN_020024cc(DAT_0216e77c + 2,&DAT_0216b9c0,3);
  if (iVar2 == 0) {
    FUN_020517fc(puVar1 + 2,0,0xc);
    *(undefined1 *)(DAT_0216e77c + 5) = 0;
  }
  else {
    *(undefined1 *)(puVar1 + 5) = 3;
  }
  FUN_0215c274();
  FUN_02154978(local_20 + 0xb);
  FUN_02154588(local_28[local_20],0xffffffff);
  FUN_02154724(2);
  uVar3 = FUN_021665f8(0,0);
  *DAT_0216e77c = uVar3;
  uVar3 = FUN_02165ff4(0,0x3f);
  DAT_0216e77c[1] = uVar3;
  *(ushort *)(DAT_0216e77c[1] + 4) = *(ushort *)(DAT_0216e77c[1] + 4) & 0xf3ff | 0xc00;
  FUN_0215bd58();
  FUN_0215bd98();
  FUN_02157088(0x215c239);
  return;
}

