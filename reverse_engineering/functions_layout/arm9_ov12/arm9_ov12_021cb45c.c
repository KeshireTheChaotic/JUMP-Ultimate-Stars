
/* JUS-GAME ALFont::CreateIntf [source-string] __FILE__="ALFont.cpp" __FUNCTION__="CreateIntf"
   lines=[722] passed to 1 source-location call(s) */

void ALFont::CreateIntf(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)jus_AllocDebug(8,s_ALFont_cpp_021d5060,s_CreateIntf_021d4e80,0x2d2);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &jus_Class_021d4ec0::vftable;
    puVar1[1] = param_1;
  }
  *(undefined4 **)(param_1 + 0x68) = puVar1;
  return;
}

