
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0216994c) */
/* WARNING: Removing unreachable block (ram,0x02169954) */
/* WARNING: Removing unreachable block (ram,0x0216995c) */
/* WARNING: Removing unreachable block (ram,0x02169978) */
/* WARNING: Removing unreachable block (ram,0x0216996c) */
/* WARNING: Removing unreachable block (ram,0x02169964) */
/* WARNING: Removing unreachable block (ram,0x02169940) */
/* WARNING: Removing unreachable block (ram,0x02169938) */
/* WARNING: Removing unreachable block (ram,0x02169930) */
/* WARNING: Removing unreachable block (ram,0x02169934) */
/* WARNING: Removing unreachable block (ram,0x0216993c) */
/* WARNING: Removing unreachable block (ram,0x02169960) */
/* WARNING: Removing unreachable block (ram,0x02169968) */
/* WARNING: Removing unreachable block (ram,0x02169974) */
/* WARNING: Removing unreachable block (ram,0x02169958) */
/* WARNING: Removing unreachable block (ram,0x02169950) */
/* WARNING: Removing unreachable block (ram,0x02169948) */
/* WARNING: Removing unreachable block (ram,0x02169944) */

void FUN_02169890(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint extraout_r1;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar1;
  uint unaff_r11;
  undefined1 *puVar2;
  char *in_lr;
  undefined1 in_NG;
  bool in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined1 uVar3;
  bool bVar4;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined1 auStack_10c [268];
  
  if ((bool)in_OV) {
    puVar2 = auStack_10c;
    register0x00000054 = (BADSPACEBASE *)auStack_10c;
    coprocessor_storelong(0xf,in_cr6,puVar2);
    coprocessor_moveto(0xd,3,3,unaff_r4,in_cr5,in_cr5);
    coprocessor_storelong(3,in_cr4,0x21696cc);
  }
  if ((bool)in_CY) {
    coprocessor_function(0xf,6,3,in_cr6,in_cr14,in_cr13);
  }
  uVar3 = false;
  if (in_ZR) {
    uVar1 = (uint)(byte)in_CY << 0x1f | param_4 >> 1;
    in_CY = param_1 <= uVar1;
    in_OV = SBORROW4(uVar1,param_1);
    in_NG = (int)(uVar1 - param_1) < 0;
    uVar3 = uVar1 == param_1;
  }
  if ((bool)in_OV) {
    coprocessor_storelong(0xf,in_cr6,(undefined1 *)((int)register0x00000054 + -0x10c));
    software_interrupt(0x632f75);
  }
  if (!(bool)in_NG) {
    software_interrupt(0x756d6d);
  }
  if ((bool)in_OV) {
    in_lr = s_Commu_commu_pack_aar_021698a4 + 0x10;
    func_0x03a41e78();
    param_2 = extraout_r1;
  }
  if ((bool)in_OV) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x8000000b - param_2;
    *in_lr = (char)uVar1;
  }
  if ((bool)in_CY) {
    coprocessor_function(0xe,7,3,in_cr6,in_cr4,in_cr15);
  }
  bVar4 = false;
  if ((bool)uVar3) {
    uVar1 = (param_2 >> 0xc | param_2 << 0x14) - unaff_r4;
    bVar4 = uVar1 == 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0216992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (((((((((((((bVar4 && (uVar1 & 0x48000) == 0) && (uVar1 & 0x4000) == 0) &&
               (uVar1 & 0x60000) == 0) && (uVar1 & 0x30000) == 0) && (uVar1 & 0x270000) == 0) &&
            (uVar1 & 0x48000) == 0) && (uVar1 & 0x2a0000) == 0) && (unaff_r5 & 0x4500000) == 0) &&
         (unaff_r5 & 0x5100000) == 0) && (unaff_r5 & 0x33000000) == 0) && (unaff_r4 & 0x1100) == 0)
      && (unaff_r11 & 0x144) == 0) && (unaff_r5 & 0x2c00000) == 0) {
    (*(code *)(param_3 & 0x6800000))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02169944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02169948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0216994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02169950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02169954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x02169958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x0216995c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

