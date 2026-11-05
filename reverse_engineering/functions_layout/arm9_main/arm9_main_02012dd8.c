
/* WARNING: Removing unreachable block (ram,0x02012e3c) */

void FUN_02012dd8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_020a0c5c & 1) == 0) {
    PropBindInstance_02095200::PropBindInstance_02095200(&DAT_020a1c44,DAT_020a101c);
    DAT_020a1c44 = &PropBindInstance_02095200_Derived_02095140::vftable;
    iVar1 = FUN_0201a228(0x14);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = jus_Class_02097b38::jus_Class_02097b38(iVar1,&DAT_0209d92c,&DAT_0209d924);
    }
    DAT_020a1c64 = uVar2;
    FUN_0200f2b0(&DAT_020a1c44,
                 PropBindInstance_02095200_Derived_02095140::
                 ~PropBindInstance_02095200_Derived_02095140,&DAT_020a15b4);
    DAT_020a0c5c = DAT_020a0c5c | 1;
  }
  DAT_020a0d00 = &DAT_020a1c44;
  return;
}

