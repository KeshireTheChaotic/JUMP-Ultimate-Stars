
int FUN_02054990(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 in_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  undefined1 uStack00000000;
  
  DAT_020aae78 = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  DAT_020aae70 = param_1;
  DAT_020aae08 = *in_r12;
  DAT_020aae0c = in_r12[1];
  DAT_020aae10 = in_r12[2];
  DAT_020aae14 = in_r12[3];
  puVar1 = (undefined4 *)(in_r12[4] & 0xfffffffe);
  DAT_020aae18 = unaff_r4;
  DAT_020aae1c = unaff_r5;
  DAT_020aae20 = unaff_r6;
  DAT_020aae24 = unaff_r7;
  DAT_020aae28 = unaff_r8;
  DAT_020aae2c = unaff_r9;
  DAT_020aae30 = unaff_r10;
  DAT_020aae34 = unaff_r11;
  DAT_020aae74 = in_r12;
  DAT_020aae68 = *puVar1;
  DAT_020aae04 = puVar1[1];
  DAT_020aae38 = puVar1[2];
  DAT_020aae44 = puVar1[3];
  DAT_020aae3c = &uStack00000000;
  DAT_020aae40 = in_lr;
  DAT_020aae80 = 0;
  return (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
}

