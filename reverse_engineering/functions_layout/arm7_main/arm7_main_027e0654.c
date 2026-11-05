
int FUN_027e0654(undefined4 param_1)

{
  undefined2 *puVar1;
  int local_8 [2];
  
  FUN_037fcc6c(&DAT_027f82a0,param_1,1);
  FUN_037fcbcc(&DAT_027f82f8,local_8,1);
  if (*(short *)(local_8[0] + (uint)*(ushort *)(local_8[0] + 0xe) * 2 + 0x14) == 0xe) {
    puVar1 = (undefined2 *)FUN_03808074();
    *puVar1 = 0x80;
    puVar1[1] = 0x13;
    puVar1[2] = 0x18;
    FUN_038080d0();
    FUN_037fedb8();
    FUN_037fe538();
  }
  return local_8[0];
}

