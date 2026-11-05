
void FUN_021548bc(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r7;
  bool bVar4;
  int local_2cc;
  int local_2c8;
  uint local_2c0;
  undefined1 auStack_2bc [8];
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined1 auStack_2a4 [8];
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined1 auStack_28c [8];
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  undefined1 auStack_270 [8];
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 auStack_258 [8];
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined1 auStack_240 [8];
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined1 auStack_228 [8];
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined1 auStack_210 [8];
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined1 auStack_1f8 [8];
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 auStack_1e0 [8];
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 auStack_1c8 [8];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 auStack_1b0 [8];
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  int local_198;
  undefined1 auStack_194 [16];
  undefined1 auStack_184 [16];
  undefined1 auStack_174 [16];
  undefined1 auStack_164 [16];
  undefined1 auStack_154 [16];
  undefined1 auStack_144 [16];
  undefined1 auStack_134 [16];
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [16];
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  
  bVar4 = false;
  if (*param_1 != 0) {
    param_1[0x27] = (int)*(short *)(*(int *)(*param_1 + 0x56c) + 0x16);
    iVar2 = *param_1;
    iVar3 = *(int *)(iVar2 + 0x56c);
    unaff_r4 = (int)*(short *)(iVar3 + 0x18);
    local_2c8 = *(int *)(iVar2 + 0x5c8);
    unaff_r7 = (int)*(char *)(iVar2 + 0x5cd);
    local_2c0 = (uint)*(byte *)(iVar3 + 0x13);
    bVar4 = *(char *)(iVar2 + 0x5ce) != '\0';
    local_2cc = (int)*(char *)(iVar3 + 0x42);
  }
  if (*(char *)((int)param_1 + 0xc5) != local_2cc) {
    *(char *)((int)param_1 + 0xc5) = (char)local_2cc;
    for (iVar2 = 0; iVar2 < *(char *)((int)param_1 + 0xc2); iVar2 = iVar2 + 1) {
      if (iVar2 == local_2cc) {
        (**(code **)(**(int **)(param_1[iVar2 + 5] + 4) + 0xd8))
                  (*(int **)(param_1[iVar2 + 5] + 4),1);
      }
      else {
        (**(code **)(**(int **)(param_1[iVar2 + 5] + 4) + 0xd8))
                  (*(int **)(param_1[iVar2 + 5] + 4),0);
      }
    }
  }
  if (bVar4) {
    if ((short)param_1[0x2c] != -1) {
      *(undefined2 *)(param_1 + 0x2c) = 0xffff;
      FUN_02023894(*(undefined4 *)(param_1[10] + 4),0x5f0017,0);
    }
  }
  else if ((int)(short)param_1[0x2c] != (int)(char)unaff_r7) {
    *(short *)(param_1 + 0x2c) = (short)(char)unaff_r7;
    if (unaff_r7 < 0x11) {
      if (unaff_r7 < 0) {
        unaff_r7 = 0;
      }
    }
    else {
      unaff_r7 = 0x10;
    }
    FUN_02023894(*(undefined4 *)(param_1[10] + 4),unaff_r7 + 0x5f0006,0);
  }
  if ((param_1[0x2a] != unaff_r4) || (param_1[0x28] != param_1[0x27])) {
    param_1[0x2a] = unaff_r4;
    param_1[0x28] = param_1[0x27];
    if (*param_1 != 0) {
      param_1[0x27] = (int)*(short *)(*(int *)(*param_1 + 0x56c) + 0x16);
    }
    if (param_1[0x27] < 0x1000) {
      param_1[0x27] = 0x1000;
    }
    else if (0x4000 < param_1[0x27]) {
      param_1[0x27] = 0x4000;
    }
    param_1[0x29] =
         (int)(param_1[0x27] * 0xc0 + ((uint)(param_1[0x27] * 0xc0 >> 0xd) >> 0x12)) >> 0xe;
    if (unaff_r4 < 0) {
      unaff_r4 = 0;
    }
    else if (param_1[0x27] < unaff_r4) {
      unaff_r4 = param_1[0x27];
    }
    iVar3 = param_1[0x29];
    iVar2 = FUN_0200d12c(unaff_r4 * iVar3,param_1[0x27]);
    iVar3 = iVar3 - iVar2;
    if ((*(short *)((int)param_1 + 0xba) != (short)iVar2) ||
       ((int)(short)param_1[0x2f] != iVar3 * 0x10000 >> 0x10)) {
      *(short *)((int)param_1 + 0xba) = (short)iVar2;
      *(short *)(param_1 + 0x2f) = (short)iVar3;
      if (iVar2 == 0) {
        piVar1 = *(int **)(param_1[0x1e] + 4);
        (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      }
      else {
        (**(code **)(**(int **)(*(int *)(param_1[0x1e] + 4) + 100) + 0x60))();
        (**(code **)(**(int **)(*(int *)(param_1[0x1e] + 4) + 100) + 100))();
        local_214 = 0x200;
        local_218 = 0x100;
        local_21c = 0;
        local_220 = 0x80;
        FUN_021551a8(auStack_c4,&local_220,&local_21c,&local_218,&local_214);
        FUN_02155190(auStack_228,0xfffffff8,0,0,8);
        FUN_0215515c(auStack_d4,auStack_228);
        FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x1e] + 4) + 100),1,auStack_d4,&DAT_02093d5c,
                     auStack_c4);
        local_1fc = 0x240;
        local_200 = 0x80;
        local_204 = 0;
        local_208 = 0;
        FUN_021551a8(auStack_a4,&local_208,&local_204,&local_200,&local_1fc);
        FUN_02155190(auStack_210,0,0,iVar2,9);
        FUN_0215515c(auStack_b4,auStack_210);
        FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x1e] + 4) + 100),1,auStack_b4,&DAT_02093d5c,
                     auStack_a4);
        if (iVar3 == 0) {
          local_1e8 = 0x180;
          local_1ec = 0;
          local_1e4 = 0x200;
          local_1f0 = 0x100;
          FUN_021551a8(auStack_84,&local_1f0,&local_1ec,&local_1e8,&local_1e4);
          FUN_02155190(auStack_1f8,iVar2,0,iVar2 + 8,8);
          FUN_0215515c(auStack_94,auStack_1f8);
          FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x1e] + 4) + 100),1,auStack_94,&DAT_02093d5c
                       ,auStack_84);
        }
        (**(code **)(**(int **)(*(int *)(param_1[0x1e] + 4) + 100) + 0x68))();
        (**(code **)(**(int **)(param_1[0x1e] + 4) + 0xd8))(*(int **)(param_1[0x1e] + 4),1);
      }
      if (iVar3 == 0) {
        piVar1 = *(int **)(param_1[0x1f] + 4);
        (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      }
      else {
        (**(code **)(**(int **)(*(int *)(param_1[0x1f] + 4) + 100) + 0x60))();
        (**(code **)(**(int **)(*(int *)(param_1[0x1f] + 4) + 100) + 100))();
        if (iVar2 == 0) {
          local_1cc = 0x200;
          local_1d0 = 0x100;
          local_1d4 = 0;
          local_1d8 = 0x80;
          FUN_021551a8(auStack_64,&local_1d8,&local_1d4,&local_1d0,&local_1cc);
          FUN_02155190(auStack_1e0,0xfffffff8,0,0,8);
          FUN_0215515c(auStack_74,auStack_1e0);
          FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x1f] + 4) + 100),1,auStack_74,&DAT_02093d5c
                       ,auStack_64);
        }
        local_1b4 = 0x240;
        local_1b8 = 0x1a0;
        local_1bc = 0;
        local_1c0 = 0x180;
        FUN_021551a8(auStack_44,&local_1c0,&local_1bc,&local_1b8,&local_1b4);
        FUN_02155190(auStack_1c8,0,0,iVar3,9);
        FUN_0215515c(auStack_54,auStack_1c8);
        FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x1f] + 4) + 100),1,auStack_54,&DAT_02093d5c,
                     auStack_44);
        local_1a0 = 0x180;
        local_1a4 = 0;
        local_19c = 0x200;
        local_1a8 = 0x100;
        FUN_021551a8(auStack_24,&local_1a8,&local_1a4,&local_1a0,&local_19c);
        FUN_02155190(auStack_1b0,iVar3,0,iVar3 + 8,8);
        FUN_0215515c(auStack_34,auStack_1b0);
        FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x1f] + 4) + 100),1,auStack_34,&DAT_02093d5c,
                     auStack_24);
        (**(code **)(**(int **)(*(int *)(param_1[0x1f] + 4) + 100) + 0x68))();
        local_198 = (iVar2 + 0x13) * 0x1000;
        FUN_021536a4(param_1[0x1f],&local_198);
        (**(code **)(**(int **)(param_1[0x1f] + 4) + 0xd8))(*(int **)(param_1[0x1f] + 4),1);
      }
    }
  }
  if (param_1[0x2b] != local_2c8) {
    param_1[0x2b] = local_2c8;
    if (local_2c8 < 0) {
      local_2c8 = 0;
    }
    else if (0x6400 < local_2c8) {
      local_2c8 = 0x6400;
    }
    iVar2 = FUN_0200d12c(local_2c8 * 0x3a,0x6400);
    iVar3 = 0x3a - iVar2;
    if ((*(short *)((int)param_1 + 0xbe) != (short)iVar2) ||
       ((int)(short)param_1[0x30] != iVar3 * 0x10000 >> 0x10)) {
      *(short *)((int)param_1 + 0xbe) = (short)iVar2;
      *(short *)(param_1 + 0x30) = (short)iVar3;
      if (iVar2 == 0) {
        (**(code **)(**(int **)(param_1[0x20] + 4) + 0xd8))(*(int **)(param_1[0x20] + 4),0);
      }
      else {
        (**(code **)(**(int **)(*(int *)(param_1[0x20] + 4) + 100) + 0x60))();
        (**(code **)(**(int **)(*(int *)(param_1[0x20] + 4) + 100) + 100))();
        if (iVar3 == 0) {
          local_2ac = 0x100;
          local_2b0 = 0x200;
          local_2a8 = 0x400;
          local_2b4 = 0x80;
          FUN_021551a8(auStack_184,&local_2b4,&local_2b0,&local_2ac,&local_2a8);
          FUN_02155190(auStack_2bc,0xfffffff8,0,0,7);
          FUN_0215515c(auStack_194,auStack_2bc);
          FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x20] + 4) + 100),1,auStack_194,
                       &DAT_02093d5c,auStack_184);
        }
        local_290 = 0x400;
        local_294 = 0x180;
        local_298 = 0x200;
        local_29c = 0x100;
        FUN_021551a8(auStack_164,&local_29c,&local_298,&local_294,&local_290);
        FUN_02155190(auStack_2a4,0,0,iVar2,7);
        FUN_0215515c(auStack_174,auStack_2a4);
        FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x20] + 4) + 100),1,auStack_174,&DAT_02093d5c,
                     auStack_164);
        local_27c = 0x480;
        local_280 = 0x200;
        local_278 = 0x400;
        local_284 = 0x400;
        FUN_021551a8(auStack_144,&local_284,&local_280,&local_27c,&local_278);
        FUN_02155190(auStack_28c,iVar2,0,iVar2 + 8,7);
        FUN_0215515c(auStack_154,auStack_28c);
        FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x20] + 4) + 100),1,auStack_154,&DAT_02093d5c,
                     auStack_144);
        (**(code **)(**(int **)(*(int *)(param_1[0x20] + 4) + 100) + 0x68))();
        local_274 = (0x55 - iVar2) * 0x1000;
        FUN_021536a4(param_1[0x20],&local_274);
        (**(code **)(**(int **)(param_1[0x20] + 4) + 0xd8))(*(int **)(param_1[0x20] + 4),1);
      }
      if (iVar3 == 0) {
        (**(code **)(**(int **)(param_1[0x21] + 4) + 0xd8))(*(int **)(param_1[0x21] + 4),0);
      }
      else {
        (**(code **)(**(int **)(*(int *)(param_1[0x21] + 4) + 100) + 0x60))();
        (**(code **)(**(int **)(*(int *)(param_1[0x21] + 4) + 100) + 100))();
        local_260 = 0x100;
        local_264 = 0x200;
        local_25c = 0x400;
        local_268 = 0x80;
        FUN_021551a8(auStack_124,&local_268,&local_264,&local_260,&local_25c);
        FUN_02155190(auStack_270,0xfffffff8,0,0,7);
        FUN_0215515c(auStack_134,auStack_270);
        FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x21] + 4) + 100),1,auStack_134,&DAT_02093d5c,
                     auStack_124);
        local_248 = 0x280;
        local_24c = 0;
        local_244 = 0x200;
        local_250 = 0x200;
        FUN_021551a8(auStack_104,&local_250,&local_24c,&local_248,&local_244);
        FUN_02155190(auStack_258,0,0,iVar3,7);
        FUN_0215515c(auStack_114,auStack_258);
        FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x21] + 4) + 100),1,auStack_114,&DAT_02093d5c,
                     auStack_104);
        if (iVar2 == 0) {
          local_230 = 0x480;
          local_234 = 0x200;
          local_22c = 0x400;
          local_238 = 0x400;
          FUN_021551a8(auStack_e4,&local_238,&local_234,&local_230,&local_22c);
          FUN_02155190(auStack_240,0x3a,0,0x42,7);
          FUN_0215515c(auStack_f4,auStack_240);
          FUN_0202b9e4(*(undefined4 *)(*(int *)(param_1[0x21] + 4) + 100),1,auStack_f4,&DAT_02093d5c
                       ,auStack_e4);
        }
        (**(code **)(**(int **)(*(int *)(param_1[0x21] + 4) + 100) + 0x68))();
        (**(code **)(**(int **)(param_1[0x21] + 4) + 0xd8))(*(int **)(param_1[0x21] + 4),1);
      }
    }
  }
  if (*(char *)((int)param_1 + 0xc3) != (char)local_2c0) {
    *(char *)((int)param_1 + 0xc3) = (char)local_2c0;
    FUN_02023894(*(undefined4 *)(param_1[9] + 4),local_2c0 + 0x5f001a,0);
  }
  bVar4 = (*(byte *)(param_1[2] + 0x11d) & 2) != 0;
  if ((bool)(char)param_1[0x34] != bVar4) {
    *(bool *)(param_1 + 0x34) = bVar4;
    if (bVar4) {
      piVar1 = *(int **)(param_1[0x1d] + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      FUN_02028330(*(undefined4 *)(param_1[0x1d] + 4));
    }
    else {
      piVar1 = *(int **)(param_1[0x1d] + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      FUN_020282f4(*(undefined4 *)(param_1[0x1d] + 4));
    }
  }
  *(char *)((int)param_1 + 199) = *(char *)((int)param_1 + 199) + '\x01';
  return;
}

