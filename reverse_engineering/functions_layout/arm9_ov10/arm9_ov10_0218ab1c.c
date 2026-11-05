
undefined4 FUN_0218ab1c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  
  local_14 = DAT_021a66a8;
  local_13 = DAT_021a66a9;
  local_12 = 0x66;
  local_11 = DAT_021a66ac;
  local_10 = DAT_021a66ad;
  local_f = DAT_021a66ae;
  local_e = DAT_021a66af;
  uVar1 = FUN_02001ed8();
  local_18 = (undefined1)uVar1;
  local_d = local_18;
  uStack_17 = (undefined1)((uint)uVar1 >> 8);
  local_c = uStack_17;
  uStack_16 = (undefined1)((uint)uVar1 >> 0x10);
  local_b = uStack_16;
  uStack_15 = (undefined1)((uint)uVar1 >> 0x18);
  local_a = uStack_15;
  iVar2 = FUN_0218a6b8(param_1,&local_14,0xb);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}

