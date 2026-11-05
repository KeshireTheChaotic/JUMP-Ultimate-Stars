
void FUN_027e5794(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 local_240 [3];
  undefined2 local_23a;
  undefined1 local_232;
  undefined1 auStack_228 [6];
  undefined1 auStack_222 [14];
  undefined4 local_214;
  undefined1 auStack_210 [516];
  
  iVar1 = DAT_027f97f0;
  FUN_037fe788(param_1 + 4,DAT_027f97f0 + 0xa2,6);
  *(undefined4 *)(iVar1 + 0xa8) = *(undefined4 *)(param_1 + 0xc);
  *(short *)(iVar1 + 0xac) = (short)*(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x18) = 1;
  MIi_CpuClear16(0,local_240,0x30);
  local_240[0] = 0;
  local_23a = (undefined2)*(undefined4 *)(param_1 + 0x10);
  if (*(short *)(iVar1 + 0x1ec) == 2) {
    local_232 = 0x14;
  }
  else {
    local_232 = 10;
  }
  FUN_037fe788(param_1 + 4,auStack_228,6);
  FUN_037fe788(iVar1 + 0xe0,auStack_222,6);
  local_214 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = FUN_027e283c(auStack_210,local_240);
  puVar2 = (undefined2 *)FUN_03808074();
  *puVar2 = 0x12;
  puVar2[1] = (ushort)(*(short *)(iVar1 + 4) != 0);
  if (*(short *)(iVar1 + 4) != 0) {
    puVar2[2] = 0x100;
    puVar2[3] = *(undefined2 *)(iVar1 + 4);
  }
  FUN_038080d0();
  return;
}

