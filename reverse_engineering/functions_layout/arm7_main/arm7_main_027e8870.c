
void FUN_027e8870(int param_1)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 local_248 [3];
  undefined2 local_242;
  undefined1 local_23a;
  undefined1 auStack_230 [6];
  undefined1 auStack_22a [14];
  undefined1 *local_21c;
  undefined1 auStack_218 [516];
  
  psVar1 = DAT_027f97f0;
  puVar2 = (undefined2 *)FUN_03808074();
  *puVar2 = 0x28;
  if (*psVar1 == 0xb) {
    iVar3 = FUN_027e2d1c(auStack_218,*(int *)(param_1 + 4) == 1,0,1);
    psVar1 = DAT_027f97f0;
    if (*(short *)(iVar3 + 4) == 0) {
      FUN_037fe788(DAT_027f97f0 + 0xc5,DAT_027f97f0 + 0x51,6);
      *(undefined1 **)(psVar1 + 0x54) = auStack_218;
      psVar1[0x56] = 0;
      psVar1[0xc] = 1;
      psVar1[0xd] = 0;
      MIi_CpuClear16(0,local_248,0x30);
      local_248[0] = 0;
      local_242 = 0;
      if (psVar1[0xf6] == 2) {
        local_23a = 0x14;
      }
      else {
        local_23a = 10;
      }
      FUN_037fe788(psVar1 + 0xc5,auStack_230,6);
      FUN_037fe788(psVar1 + 0x70,auStack_22a,6);
      local_21c = auStack_218;
      iVar3 = FUN_027e283c(local_21c,local_248);
      if (*(short *)(iVar3 + 4) == 0) {
        puVar2[1] = 0;
        FUN_038080d0(puVar2);
      }
      else {
        puVar2[1] = 1;
        puVar2[2] = 0x100;
        puVar2[3] = *(undefined2 *)(iVar3 + 4);
        FUN_038080d0(puVar2);
      }
    }
    else {
      puVar2[1] = 1;
      puVar2[2] = 1;
      puVar2[3] = *(undefined2 *)(iVar3 + 4);
      FUN_038080d0(puVar2);
    }
  }
  else {
    puVar2[1] = 3;
    FUN_038080d0();
  }
  return;
}

