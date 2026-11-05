
/* WARNING: Removing unreachable block (ram,0x02152494) */

undefined4 FUN_0215209c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  local_74 = 0xfffffffb;
  local_38 = 0;
  local_70 = 0;
  local_6c = 0;
  DAT_0216d16c = (undefined4 *)0x1;
  local_68 = 0;
  local_60 = 0;
  local_4c = 0;
  local_44 = 0;
  local_64 = 0xfffffffe;
  local_40 = 0;
  local_54 = 0;
  local_50 = 0xffffffff;
  local_58 = 0xfffffffc;
  local_5c = 0xfffffffd;
  local_3c = 0;
  cVar6 = DAT_0216d160 < 0;
  bVar7 = DAT_0216d160 == 0;
  bVar4 = true;
  cVar5 = '\0';
  if (!bVar7) {
    if (DAT_0216d160 != 0) {
      local_74 = 0xfffffff8;
    }
    return local_74;
  }
  uVar3 = 0x21520df;
  FUN_02052ea0(500);
  puVar1 = DAT_0216d16c;
  if (bVar7 || cVar6 != cVar5) {
    DAT_0216d16c[-1] = auStack_78;
    puVar1[-2] = unaff_r11;
    puVar1[-3] = param_4;
    puVar1[-4] = extraout_r1;
  }
  if (!bVar7) {
    *puVar1 = 0x21520ec;
    puVar1[-1] = uVar3;
    puVar1[-2] = auStack_78;
    puVar1[-3] = unaff_r8;
    puVar1[-4] = unaff_r7;
    puVar1[-5] = &DAT_0216d16c;
    puVar1[-6] = param_4;
    puVar1[-7] = param_3;
  }
  if (bVar4 && !bVar7) {
    puVar1[-1] = uVar3;
    puVar1[-2] = unaff_r10;
    puVar1[-3] = &DAT_0216d16c;
    puVar1[-4] = unaff_r5;
    puVar1[-5] = 0;
    puVar1[-6] = param_4;
  }
  puVar2 = puVar1;
  if (!bVar7) {
    puVar2 = puVar1 + -0x100;
    *puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x021520f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)(puVar2 + 0x85483d))();
  return uVar3;
}

