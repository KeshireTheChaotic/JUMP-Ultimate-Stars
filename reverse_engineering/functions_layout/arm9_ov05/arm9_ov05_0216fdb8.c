
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0216fe00) */

void FUN_0216fdb8(uint param_1,undefined4 param_2,int param_3)

{
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r11;
  int in_r12;
  bool in_ZR;
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if (in_ZR) {
    unaff_r11 = unaff_r5 & 7;
    bVar1 = unaff_r11 == 0;
  }
  bVar2 = false;
  if (bVar1) {
    param_1 = unaff_r4 & param_3 + param_1 & unaff_r11 << (param_3 + param_1 & 0xff);
    bVar2 = param_1 == 0;
  }
  if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0216fdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(param_3 + param_1 & in_r12 << (param_3 + param_1 & 0xff) & in_r12 << 1 & 0xfffffffc))
              ();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

