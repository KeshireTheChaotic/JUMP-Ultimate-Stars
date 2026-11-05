
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x02153d08) */

void FUN_02153ce8(uint param_1,uint param_2,uint param_3)

{
  uint unaff_r5;
  uint unaff_r8;
  int in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_NG) {
    param_3 = param_2 & ~(in_lr << (param_1 & 0xff));
  }
  if (!in_CY || in_ZR) {
    param_2 = unaff_r5 & (int)param_1 >> (unaff_r8 & 0xff);
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xc21ce8);
  if (in_NG) {
    param_3 = param_2 & ~(in_lr << (param_1 & 0xff));
  }
  if (in_OV) {
    coprocessor_moveto2(8,2,param_1 + ((int)param_1 >> (unaff_r8 & 0xff)),param_3,in_cr0);
  }
  if (in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

