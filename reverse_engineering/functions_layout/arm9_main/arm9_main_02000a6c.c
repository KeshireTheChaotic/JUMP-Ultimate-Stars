
/* JUS-SDK init_cp15 [structural] crt0 call #1 of 7 in NitroSDK order */

uint init_cp15(void)

{
  uint uVar1;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfff06ffa);
  coproc_moveto_Invalidate_Entire_Instruction(0);
  coproc_moveto_Invalidate_Entire_Data_cache(0);
  coproc_moveto_Data_Synchronization(0);
  coprocessor_moveto(0xf,0,0,0x4000033,in_cr6,in_cr0);
  coprocessor_moveto(0xf,0,0,0x200002d,in_cr6,in_cr1);
  coprocessor_moveto(0xf,0,0,0x27e0021,in_cr6,in_cr2);
  coprocessor_moveto(0xf,0,0,0x8000035,in_cr6,in_cr3);
  coprocessor_moveto(0xf,0,0,0x27c001b,in_cr6,in_cr4);
  coprocessor_moveto(0xf,0,0,0x100002f,in_cr6,in_cr5);
  coprocessor_moveto(0xf,0,0,0xffff001d,in_cr6,in_cr6);
  coprocessor_moveto(0xf,0,0,0x27ff017,in_cr6,in_cr7);
  coprocessor_moveto(0xf,0,1,0x20,in_cr9,in_cr1);
  coprocessor_moveto(0xf,0,0,0x27c000a,in_cr9,in_cr1);
  coproc_moveto_Translation_table_base_1(0x42);
  coproc_moveto_Translation_table_base_0(0x42);
  coproc_moveto_Domain_Access_Control(2);
  coprocessor_moveto(0xf,0,3,0x5100011,in_cr5,in_cr0);
  coprocessor_moveto(0xf,0,2,0x15111011,in_cr5,in_cr0);
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x5707d);
  return uVar1 | 0x5707d;
}

