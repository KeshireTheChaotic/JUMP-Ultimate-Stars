
void FUN_021629a4(undefined4 param_1,uint param_2,uint param_3)

{
  uint unaff_r6;
  uint unaff_r10;
  bool in_ZR;
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if (in_ZR) {
    param_2 = unaff_r10 & 0xc000000;
    param_3 = unaff_r6 & 0x3300;
    bVar1 = param_3 == 0;
  }
  bVar2 = false;
  if (bVar1) {
    param_3 = unaff_r6 & 0x140;
    bVar2 = param_3 == 0;
  }
  bVar1 = false;
  if (bVar2) {
    param_3 = unaff_r6 & 0x1e0;
    bVar1 = param_3 == 0;
  }
  bVar2 = false;
  if (bVar1) {
    param_3 = unaff_r6 & 0x250;
    bVar2 = param_3 == 0;
  }
  if (bVar2) {
    param_3 = unaff_r6 & 0x370000;
  }
  CommuMenuDataMemberEnt::CommuMenuDataMemberEnt_Add_Core(1,param_2,param_3);
  return;
}

