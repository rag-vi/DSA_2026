while (!st.empty() && st.top() < current)
{
    st.pop();
}

st.push(current);